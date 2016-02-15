Audience Targeting
==================


In computational advertising, audience targeting is a method to improve ads performance, paper [6] show the importance of audience targeting in real-time advertising environment. Using correct audience targeting strategy, the ads performance can be improve up to 670% comparing to default configurations.

In our research, we'are using a audience targeting strategy that designed for high dynamic mobile marketing ecosystem. In mobile marketing, a key issue is how to present and deliver customized offer to app user according to their behaviour and browsing history. For example a user downloaded a Ski sport game, according to the user Google Map history, the user goes to hiking and ski resorts. Base on this, we can guess the user is a sport fan and we can present sport equipment ads to the user when he's playing the sport game.

We designed a campaign that aims to optimize the in app purchase (IAP) and click though rates (CTR) of ads showing in the mobile games. We collect the data though data management platform (DMP) and supplier side platform (SSP).

The DMP is our case is LeanPlum data platform, LeanPlum is a mobile A/B testing tool, it collect the real-time user data from different platforms (iOS/Android/Amazon), such data are like in game event (level complete, special item used, log-in information etc), user demographic information (devices, OS, country etc) and user behaviour history (real money purchase, ads shows, ads watched etc).

We use two SSP platform to collect and track ads performance information, one SSP platform is AppsFlyer, another SSP is Singuler.
AppsFlyer collects and tracks ads performance information such like in-app event tracking. Singuler collects and tracks user conversion information such like app installed, landing page event recording, ads view and clicks.

The following chapter are divided into two parts, the first parts is about IAP optimization, the second part is about CTR optimization, both performance optimization use audience targeting and behavioural targeting techniques, but the implementation details and lower level algorithms are different.


Data warehouse and streaming pipeline
-------------------------------------

  * Big query
  * Data aggregation
  * Query optimization
  * ETL
  * Pre and post process
  * Streaming

Data processing
^^^^^^^^^^^^^^^

We are receiving data from multiple data management platforms, for example LeanPlum, most data management platform offers 2 major communicating forms: batch and streaming. There are advantages and disadvantages of each form.

Batch data processing
"""""""""""""""""""""

The advantage of systems based on batch data processing is there no high performance real-time data processing pipeline needed, the system is more stable and reliable due to the low data traffic and flexible schedules. If one batch process failed, the system can easily rerun the data process program and backup the data. The disadvantage of batch data processing is it's unable to make real-time decision and prediction.

Real-time data streaming
""""""""""""""""""""""""

The advantages of systems based on real-time data streaming is that systems built base on real-time data streaming are able to do real-time analysis. It provides finer grained user and behavioral targeting ability. The system is able to make decision and recommendation for users base on their live activities. The services provided to users are more customized and accurate. But there are many challenges posed to real-time data streaming.

The first problem is the real-time data streaming is more sensitive to dynamic environment, for example, schema changes, incomplete or even inconsistent data, can easily cause unpredictable errors, sometimes even worse, yield undetected wrong results.

The second problem is the challenge of design and implementation of high performance, reliable data streaming pipeline. Gigabyte per second data traffics are common in practice. The solutions to handle heavy data traffics are include: local processing, cloud processing or mixed of local/cloud processing approaches.

Local Computing
'''''''''''''''

Local computing approaches mainly involves GPU and distributed system computing technologies.

GPU is a powerful computing resource, the most advance GPU processor has thousands cores and up-to 32 Gb on chip memory [47] (NVidia Tesla and Geforce 980 Ti). But the GPU suffers from the limitation of data structure that available on GPU chip. It also unable dynamic allocate on chip memory.
The currently CUDA [48] platform only supports numerical and char data types, it doesn't support vector, string, dictionary, set and other advanced data structure due to the limitation of memory and dynamic allocation. Since most data format in big data platform are Table and JSON format, it's hard to use GPU to parse the data directly, additional works are needed in order to utilize GPU (such like implement static memory dictionary and other advance data structure on GPU).

Small scale distributed system is another approach to process streaming data locally. But the well know problem for distributed system is the robustness of the distributed system. How to fill in the gap that caused by temporarily unavailable or offline machine? To build a distributed system also increase the hardware and daily energy cost.


Cloud computing
'''''''''''''''

There are many existing cloud computing services available on the market, for example Amazon AWS cloud computing platform and Google BigQuery. The advantage of cloud computing is it has guaranteed performance with powerful API support. One disadvantage of cloud computing is the cloud computing is highly depends on the internet robustness, the system that highly relies on cloud computing will encounter fetal interruption if the internet becomes offline. Another problem of cloud computing is the uncertainty of the remote services, the system will halt if the remote services become unavailable. The third problem of cloud computing is most cloud computing services bills on the data processed which is expensive in long term.

Heterogeneous computing
'''''''''''''''''''''''

The heterogeneous computing method is designed to address the problems and challenges mentioned above. Heterogeneous methods reduce the computing complexity for GPU processing; it also gains enhanced stability and reliability along with high performance.

Design of heterogeneous data streaming system
"""""""""""""""""""""""""""""""""""""""""""""

Our heterogeneous data streaming system is divided into 3 parts: data processing, job scheduling and data aggregation.

Processing
''''''''''

Scheduler
'''''''''

Aggregation
'''''''''''

The purpose for data aggregation is to improve the system performance and reduce cost.

Our system is designed to represent and parse JSON and table formats. We choose Google BigQuery because the Google BigQuery offers high performance hybrid information retrieval capability. In order to maximize the performance, we project raw data into vector spaces of smaller dimensions.
The queries are run on the aggregate tables. Each aggregate table serves for different queries and KPIs, for example, in order to count the daily active users, we extract the user information (user id, device id, session timestamp, system name etc) from raw data to create daily active user table. The user session information are sorted and stored by the date they are active. In this way, we can perform random access-like query base on the dates. By project raw data into the daily active user table, we deduct the data size by 99.9%. Thus corresponding queries have 1000% performance gain and reduce cost by a considerable amount.

In this way, the aggregate tables are generated to store:

 * User information (user id, device id etc)
 * Real money user information (purchase amount, timestamp etc)
 * Session information (session length, timestamp etc)
 * In app event information (game event, event value etc)




IAP optimization
----------------

We designed a system that classify the user into groups base on user's behaviours and preference. The system also measures the importance (weight) of each features. The system builds applies a voting mechanism to discriminate new users, the classifier is trained with historical data. This system has high tolerance to noise; it's also adaptive to dynamic environment; it's able to detect and follow the trend of user's interests.

Data collection
^^^^^^^^^^^^^^^

The first step is to identify whether the user behaviour falls into certain distribution or purely random. To do that, we have to collect enough labelled data to analyse the user behaviour pattern. Before launch the data collection, we choose a uniform setting for the test run. The configuration is set uniformly in order to avoid bias. For example, the pop-up ads are distributed uniformly though user session, the session length are calculated by average the previous day's user session length. Another example is some rewards events are triggered in a uniform probability, all configuration combinations are performed in a A/B test form, the reason of using a A/B test form is we want to allocate all configurations uniformly in time and demographic dimensions, independently, to minimize the sample bias.

We launch our app for 1 month and collect 20,000 positive samples (user session with real money purchase) and 1,000,000 negative samples (user session without real money purchase). In order to reduce the sample size and remove irrelevant event and noise, we first group the sample by user id and the sample size is reduced by 70%. Now we have a sample collection with unique user ids. We use the user id as seed to retrieve all relevant in game events for each user id. We limited the time window to 1 day, applying this time windows, we retrieve 1000 session events per user id in average. It ends up with total 6,000,000 session events for positive samples and 3,000,000,000 session events for negative samples.

The next step is to remove irrelevant events (all irrelevant events are hand picked by game developer), the sample size is reduced by 70%. And then we sorted the event sessions by time, segment sessions into hourly resolution, because we are only interests in the user behaviour before purchase event happens, so we remove all sessions happen after the purchase event, it cuts the sample size by 50%. The final sample size are:

 * User sessions for positive sample 900,000
 * User sessions for negative sample 4,500,000

Data representation
^^^^^^^^^^^^^^^^^^^

We represent user features in vector space, we build various vector spaces and project the user features into each vector space for different purpose.

Let :math:`u_j` be the total number of user in user group :math:`J`

In interest targeting, we build a vector space :math:`E = (c_1*e_1, c_2*e_2, ... , c_n*e_n)`  where each :math:`c_i*e_i` is a game event, the weight :math:`c_i`  is the event count in each user's record. For example if event **Ads watched** occurred 5 times in user *u*'s record, we denote this as :math:`E_u = 5 * Ads_watched`.

In user behaviour analysis, we use a probability vector to represent user group. The probability vector is represented as :math:`P = (p_1*e_1, p_2*e_2, ... , p_n*e_n)` where :math:`p_i` is the probability of event :math:`e_i` happen in user group U, :math:`p_i` is calculated as event count for event *i* :math:`c_i` divide by total number of users user group `u_j`: :math:`p_i=c_i/u_j`


User behavior distribution
^^^^^^^^^^^^^^^^^^^^^^^^^^

In order to learn whether the user behavior falls into certain distribution, we calculated the probability of every event in user group :math:`u_j`

Observation
^^^^^^^^^^^

According to our observation, the IAP user behaviour falls into certain distribution,



Use decay function for interests targeting
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

[38] states that user interests decay with time in a non-linear progress. In our system, we use a scaled sigmoid function as decay function to assign weights to user features base on timestamp.