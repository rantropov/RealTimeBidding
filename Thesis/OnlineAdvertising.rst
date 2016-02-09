This chapter is about online advertising


Overview of computational advertising
#####################################

Market share
************
The online advertising spent exceeded other advertising forms in mid 2012. The increase clearly shows the trend of future advertising form.
Online advertising is a rising advertising market. The market share grows by 15% - 20% every year [19]. The annual revenues in 2014 reaches 49.45 billion.
Performance based advertising contributes 66% in total advertising revenue in 2014 compare to 46% in 2005. CPM pricing model drops from 46% in 2005 to 33% in 2014.
The trend also shows shifting of online advertising model from offline contract pricing model to online real-time pricing model.

The rapid development of computation power has made the real-time computational advertising became achievable.
Computational advertising involves cutting edge technologies such as machine learning, data mining, natural language processing and optimization to present fine grind impression to end users in order to optimize advertising performance.
Advertisers are able to identify characteristics and interests of the target audience and ads exchange deliveries best-match ads impression to browsers to increase total revenue of both parties (advertiser and publisher).


Introduction to online advertising
**********************************

Online advertising is a form of marketing which uses internet as medium to deliver advertising or promotional message to internet browsers. [20]
Similar to other advertising media, online advertising has publishers and advertisers.

Taxonomy
========
Online advertising can be categorized by **delivery method** and **compensation method**.

By delivery method
------------------

According to **delivery method** taxonomy, online advertising can be categorized into following categories:

 * Email Marketing
 * Search Engine Marketing
 * Social Media Marketing
 * Display Advertising
 * Mobile Marketing


Email Marketing
^^^^^^^^^^^^^^^

Email marketing is directly marketing a commercial message to a group of people using email. In its broadest sense, every email sent to a potential or current customer could be considered email marketing. It usually involves using email to send ads, request business, or solicit sales or donations, and is meant to build loyalty, trust, or brand awareness. Email marketing can be done to either sold lists or a current customer database. Broadly, the term is usually used to refer to sending email messages with the purpose of enhancing the relationship of a merchant with its current or previous customers, to encourage customer loyalty and repeat business, acquiring new customers or convincing current customers to purchase something immediately, and adding advertisements to email messages sent by other companies to their customers.

Madison Logic posted global data in April 2014 that claimed 122 billion emails are sent every hour

Search Engine Marketing
^^^^^^^^^^^^^^^^^^^^^^^

**Keyword search** is the main form of search engine marketing, search engine


Social Media Marketing
^^^^^^^^^^^^^^^^^^^^^^

Display Advertising
^^^^^^^^^^^^^^^^^^^

Mobile Marketing
^^^^^^^^^^^^^^^^

By compensation method
----------------------

According to **compensation method** taxonomy, online advertising can be categorized into following categories:

 * Performance-based advertising
 * Contract-based advertising

Performance-based advertising
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

.. date::2016-Jan-14

Performance-base advertising (also called real-time advertising) is a marketing form that Ads buyer pays only when measurable results events happen. In performance-base advertising, an ads impression is sold in DSP and ads Exchange in an GSP (generalized second price) auction basis. DSP and ads Exchange gather all information about publisher, user to make the best decision for advertisers.
In performance-based advertising, advertiser, publisher and ads Exchange build up a community response of common interests and supports. Three party are dedicate to deliver high quality impressions to target audience and generate high response events. In order to achieve this, the community has to best predict target audience's characteristics and interests. This problem has attracted both industrial and academic attentions. Solutions involve cutting-edge technologies such like machine learning, data mining, optimization etc.
Performance-based advertising are able to show fine grind impression to real-time user according to user interests and characteristics. Such has better results.

.. To be continue..

The performance-base advertising has taken the industry leading marketing form, the proportion of performance-base advertising revenue in online advertising has increased from 46% to 66% in past 10 years.



Contract-based advertising
^^^^^^^^^^^^^^^^^^^^^^^^^^
.. date::2016-Jan-14

The old form of online advertising is contract-based advertising, also called direct buy market. In this pricing model, impressions and prices are negotiated in advance according to negotiations between publishers and advertisers directly in off-line.
Contract-based advertising unable to target real-time audience, the publisher shows impression to browsers in a time period or impression count basis. Also because the contract is negotiated offline before ads campaign, the system unable lacks flexibility to fit audience's interests. Thus resulted in a very low response rate.

.. To be continue..



Components of performance-based advertising platform
****************************************************

The components of online performance-base advertising platform are follows:

 * **Publisher**: A publisher is web resource such like web page or search engine which present advertisements to internet browser (consumer) though it's content or service.
 * **Advertiser**: A advertiser is the party has demands on marketing and branding, advertiser is seeking to buy impression opportunities to show it's creative to target audience.
 * **Ads Exchange**: Ads Exchange gathers impressions and sell them in a second-price (true value) auction basis.
 * **Data Management Platform and Data Provider**: DMP and DP manage and provide data to demands side
 * **Demand Side Platform**:
 * **Supply Side Platform**:

Second Price Auction
====================

[16]

Evaluation and performance metrics
##################################

[3] [17]

Price a impression
******************

Each incoming impression associate with a suggest bidding price, the suggested bidding price is calculated by evaluate the cost-per-click or cost-per-action metrics. Advertiser and DSP also able to submit a price based on their own evaluation metrics.

CTR - Click though rate
***********************

The most common strategy to price an impression is to use CTR and CVR. The campaign performance directly depends on how accuracy to predict the CTR and CVR. If CTR and CVR are over estimated, the advertiser will waste budgets on each impression and end up with less impressions. On the other hand, if the CTR and CVR are under estimated, the advertiser will miss high quality impressions and can't achieve their campaign goal.

Predict CTR
***********

[5] [15]

Audience targeting
******************

Ads Click Entropy
=================

[6]

Demand side platform
####################

[18]

Bidding optimization
********************

[4] [15] [16]

Multi objective optimization
============================

A linear programming approach
-----------------------------

[7] [2]

Audience targeting
******************

Audience targeting is a well learned area in online advertising, paper [8] [9] [10] [11] [12] [16] presents different techniques in audience targeting, paper [6] measures the importance of behavioral targeting in online advertising.

.. meta::TODO: talk about the techniques and researches in this area, describe the researches done in those papers.

My approaches:

1. Classify the user group.
The first step of audience targeting is to learn the user behaviour.
We initialize the campaign with random attributes in order to learn the user behaviour. In our case, we start a campaign with pre-defined attributes value. The campaign was left to run for 2 weeks to obtain enough labelled data to train the classifier (which is a random forest classifier).

Once having enough labelled data, we deployed a data pipeline to extract the labelled data, project user attribute into vector space and align them.

.. meta::TODO: describe the process in details

The next step is to grow a random forest for the labelled data, the first forest is grown with 1 dimension tree in each node. We choose the size of the forest as the dimension of input vector.



Budget Delivery/Allocation Optimization
***************************************

.. meta::Objective: The objective of budget delivery is to learn bidding landscape. By knowing bidding landscape, advertiser can lower advertising cost thus increase impression opportunities by avoiding competition during rush hour.

Use bidding price and impression quality score to learn bidding landscape.

.. meta::TODO

The KPI selection for budget delivery - heuristic function

.. date::2016-Jan-14

The key issue of budge allocation problem is to learn the performance metric distribution.
Once obtained the performance distribution, advertisers can optimize their budget delivery according to the distribution.

Performance metrics include:

 * Return on investment (ROI)
 * Click though rate (CTR)


Couple things has to be keep in mind:

 * The budget delivery is to optimize the advertiser's goal, the advertiser's goal sometimes are differ from budget delivery goals


.. date::2016-Jan-20
Technique
^^^^^^^^^
Use gradient boosting decision tree to predict the landscape distribution, also make decision of events.


**Challenge**

.. meta::Note: This is direct reference, has to rewrite the following reference.

Some random forests reported in the literature have consistently lower generalization error than others. For instance, random split selection (Dieterrich, 1998) does better than bagging. Breiman’s introduction of random noise into the outputs (Breiman, 1998c) also does better. But none of these these three forests do as well as Adaboost (Freund & Schapire, 1996) or other algorithms that work by adaptive reweighting (arcing) of the training set (see Breiman, 1998b; Dieterrich, 1998; Bauer & Kohavi, 1999). [43]


Learning curve:



 - Bagging ( Result analysis: Bootstrap aggregation ), ( done, ready for real world testing )

    - **EXPERIMENT 1**: Learning dynamic purchase distribution, making prediction and cast optimal strategies

        - Goal 1: increase IAP revenues
 - Random subspace method - ( done, no practice needed )
 - Random forest
 - CADT (Classification and decision tree)
 - Gradient boosting
 - Gradient boosting decision tree
 - Stochastic model for budge delivery in dynamic landscape

**Note! Calculate classifier's Error Upper Bound!**

**EXPERIMENT 1 Detail**:

 - Draw Life time customer data in finner grind ( hour, minute resolution etc.. )
 - Use Random Subspace boosting classifier or regression to label real-time data
 - Design real-time event and make decision to increase IAP



.. date::2016-Jan-29
.. meta::Note: this is a thought of implementing a global minimization solver. Can be used in constructing random forest (gradient boosting?)

Use convex optimization on non-convex space by learning the search space. Steps:

 1. Learning problem space distribution function using known sampling points.
 2. Compute global minimal in learned objective function (with all constraints)
 3. Compare objective global minimal with actual global minimal in feasible space
 4. If doesn't match (with certain confidence interval), use binary search approach to back trace to diverge point.
 5. Start fitting new curve from diverge point and add upper/lower bound to existing objective functions


Fitting curve with known sample


Learning bidding landscape
==========================

Bidding Distribution Forecasting
================================



Supplier side platform
######################

Marketplace
###########

[14] [17]

References
##########



[1] Chen, Ye, et al. "Real=time bidding algorithms for performance=based display ad allocation." Proceedings of the 17th ACM SIGKDD international conference on Knowledge discovery and data mining. ACM, 2011.

[2] Karande, Chinmay, Aranyak Mehta, and Ramakrishnan Srikant. "Optimizing budget constrained spend in search advertising." Proceedings of the sixth ACM international conference on Web search and data mining. ACM, 2013.

[3] Barajas, Joel, et al. "Marketing campaign evaluation in targeted display advertising." Proceedings of the Sixth International Workshop on Data Mining for Online Advertising and Internet Economy. ACM, 2012.

[4] Zhang, Weinan, Shuai Yuan, and Jun Wang. "Optimal real-time bidding for display advertising." Proceedings of the 20th ACM SIGKDD international conference on Knowledge discovery and data mining. ACM, 2014.

[5] Lee, Kuang-chih, et al. "Estimating conversion rate in display advertising from past erformance data." Proceedings of the 18th ACM SIGKDD international conference on Knowledge discovery and data mining. ACM, 2012.

[6] Yan, Jun, et al. "How much can behavioral targeting help online advertising?." Proceedings of the 18th international conference on World wide web. ACM, 2009.

[7] Lee, Kuang-Chih, Ali Jalali, and Ali Dasdan. "Real time bid optimization with smooth budget delivery in online advertising." Proceedings of the Seventh International Workshop on Data Mining for Online Advertising. ACM, 2013.

[8] Fan, Teng-Kai, and Chia-Hui Chang. "Sentiment-oriented contextual advertising." Knowledge and Information Systems 23.3 (2010): 321-344.

[9] Pang, Bo, and Lillian Lee. "Opinion mining and sentiment analysis." Foundations and trends in information retrieval 2.1-2 (2008): 1-135.

[10] Pak, Alexander, and Patrick Paroubek. "Twitter as a Corpus for Sentiment Analysis and Opinion Mining." LREC. Vol. 10. 2010.

[11] Liu, Bing. "Sentiment analysis and opinion mining." Synthesis Lectures on Human Language Technologies 5.1 (2012): 1-167.

[12] Liu, Bing, and Lei Zhang. "A survey of opinion mining and sentiment analysis." Mining text data. Springer US, 2012. 415-463.

[13] Bhalgat, Anand, Jon Feldman, and Vahab Mirrokni. "Online allocation of display ads with smooth delivery." Proceedings of the 18th ACM SIGKDD international conference on Knowledge discovery and data mining. ACM, 2012.

[14] Agrawal, Shipra, Zizhuo Wang, and Yinyu Ye. "A dynamic near-optimal algorithm for online linear programming." arXiv preprint arXiv:0911.2974 (2009).

[15] Richardson, Matthew, Ewa Dominowska, and Robert Ragno. "Predicting clicks: estimating the click-through rate for new ads." Proceedings of the 16th international conference on World Wide Web. ACM, 2007.

[16] Perlich, Claudia, et al. "Bid optimizing and inventory scoring in targeted online advertising." Proceedings of the 18th ACM SIGKDD international conference on Knowledge discovery and data mining. ACM, 2012.

[17] Edelman, Benjamin, Michael Ostrovsky, and Michael Schwarz. Internet advertising and the generalized second price auction: Selling billions of dollars worth of keywords. No. w11765. National Bureau of Economic Research, 2005.

[18] Raeder, Troy, et al. "Design principles of massive, robust prediction systems." Proceedings of the 18th ACM SIGKDD international conference on Knowledge discovery and data mining. ACM, 2012.

[19] IAB Internet Advertising Revenue Report

[20] Online advertising Wikipedia entry: https://en.wikipedia.org/wiki/Online_advertising

.. meta::overview of rtb and online advertising

[21] Yuan, Yong, et al. "A survey on real time bidding advertising." Service Operations and Logistics, and Informatics (SOLI), 2014 IEEE International Conference on. IEEE, 2014.

[22] Chatwin, Richard E. "An overview of computational challenges in online advertising." American Control Conference (ACC), 2013. IEEE, 2013.

[23] Brubaker, Marcus, Andreas Geiger, and Raquel Urtasun. "Lost! leveraging the crowd for probabilistic visual self-localization." Computer Vision and Pattern Recognition (CVPR), 2013 IEEE Conference on. IEEE, 2013.

[24] Freitas, André, et al. "A distributional semantics approach for selective reasoning on commonsense graph knowledge bases." Natural Language Processing and Information Systems. Springer International Publishing, 2014. 21-32.

[25] Ha, Louisa. "Online advertising research in advertising journals: A review." Journal of Current Issues & Research in Advertising 30.1 (2008): 31-48.

[26] Yuan, Yong, et al. "A survey on real time bidding advertising." Service Operations and Logistics, and Informatics (SOLI), 2014 IEEE International Conference on. IEEE, 2014.

[27] Lacerda, Anísio, et al. "Learning to advertise." Proceedings of the 29th annual international ACM SIGIR conference on Research and development in information retrieval. ACM, 2006.

[28] Fan, Weiguo, et al. "The effects of fitness functions on genetic programming‐based ranking discovery for Web search." Journal of the American Society for Information Science and Technology 55.7 (2004): 628-636.

[29] Neshat, Hamed Sadeghi. "Ranking of new sponsored online ads." Applications of Digital Information and Web Technologies (ICADIWT), 2011 Fourth International Conference on the. IEEE, 2011.

[30] Yuan, Shuai, Jun Wang, and Xiaoxue Zhao. "Real-time bidding for online advertising: measurement and analysis." Proceedings of the Seventh International Workshop on Data Mining for Online Advertising. ACM, 2013.

[31] Barford, Paul, et al. "Adscape: Harvesting and analyzing online display ads." Proceedings of the 23rd international conference on World wide web. ACM, 2014.

[32] Dave, Kushal S., and Vasudeva Varma. "Learning the click-through rate for rare/new ads from similar ads." Proceedings of the 33rd international ACM SIGIR conference on Research and development in information retrieval. ACM, 2010.

[33] Ciaramita, Massimiliano, Vanessa Murdock, and Vassilis Plachouras. "Online learning from click data for sponsored search." Proceedings of the 17th international conference on World Wide Web. ACM, 2008.

[34] Regelson, Moira, and D. Fain. "Predicting click-through rate using keyword clusters." Proceedings of the Second Workshop on Sponsored Search Auctions. Vol. 9623. 2006.

[35] Dembczynski, Krzysztof, Wojciech Kotlowski, and Dawid Weiss. "Predicting ads click-through rate with decision rules." Workshop on targeting and ranking in online advertising. Vol. 2008. 2008.

[36] Fan, Teng-Kai, and Chia-Hui Chang. "Sentiment-oriented contextual advertising." Knowledge and Information Systems 23.3 (2010): 321-344.

[37] Go, Alec, Richa Bhayani, and Lei Huang. "Twitter sentiment classification using distant supervision." CS224N Project Report, Stanford 1 (2009): 12.

[38] Grbovic, Mihajlo, et al. "Gender and Interest Targeting for Sponsored Post Advertising at Tumblr." Proceedings of the 21th ACM SIGKDD International Conference on Knowledge Discovery and Data Mining. ACM, 2015.

[39] Ferrara, Emilio, et al. "Web data extraction, applications and techniques: A survey." Knowledge-Based Systems 70 (2014): 301-323.

[40] Balinski, M. L., and A. W. Tucker. "Duality theory of linear programs: A constructive approach with applications." Siam Review 11.3 (1969): 347-377.

[41] Chvatal, Vasek. Linear programming. Macmillan, 1983.

[42] Allemang, Dean, and James Hendler. Semantic web for the working ontologist: effective modeling in RDFS and OWL. Elsevier, 2011.

[43] Breiman, Leo. "Random forests." Machine learning 45.1 (2001): 5-32.

[44] Duan, Q. Y., Vijai K. Gupta, and Soroosh Sorooshian. "Shuffled complex evolution approach for effective and efficient global minimization." Journal of optimization theory and applications 76.3 (1993): 501-521.

[45] Bresson, Xavier, et al. "Fast global minimization of the active contour/snake model." Journal of Mathematical Imaging and vision 28.2 (2007): 151-167.

