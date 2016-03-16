To be sent out
==============

Dear professor Jiang,

My name is Yubo Zhou, a MASc candidate in Computer Science. My research topic is about computational advertising and audience targeting. I'm using deeping learning in my thesis, but I have couple questions about deep learning and neural networks. Could you give me some advices?

I'm using deep learning to predict click through rate (CTR) [1] for impressions (ads) and rank them. The system has to be deployed in real-time scenario, the performance is very important, so I introduced a pre-training phase. What does the pre-training phase do is bassically feature selection.
The benefits of feature selection is not only because it reduces the training time but also includes following assumptions:

1. If ANN is sensitive to noise, than the model will benefit from feature selection because the feature selection filters noisy features and prevent over-fitting.
2. If we can determine the correlation between features, we can find the optimal number of layers and hidden neurons in order to maximize the performance without losing accuracy (also avoid over-fitting).






[1] Zhang, Weinan, Tianming Du, and Jun Wang. "Deep Learning over Multi-field Categorical Data: A Case Study on User Response Prediction." arXiv preprint arXiv:1601.02376 (2016).



2016-01-07 with Professor Wolfgang
==================================

Wolfgang:
I think the issue is a little different:  the goal of a MI approach is to help the user interact with the system, e.g., by taking over repetitive tasks, by proposing new avenues, altering to critical changes, etc.

Full automation is thus only a _temporary_ goal. Consider it this way: if you can automate it 100%, that sounds good - but only until the environment changes. Once something critical changes, a MI system needs to alert the user, explain the problem in a way that the user can understand (!), and then solicit human help to address the change. Typically solving such a problem will take some iteration. After that the system can automate gain - until the next change of environment/assumption/etc.

Me:
My thesis is about a framework to describe publisher's resources using Semantic Web in order to maximize the publisher and advertiser's profit. The framework has following features:

1. Be adaptive to the dynamic web, adopt the best (most accurate) description for current browser (user) in real-time.
2. The framework adjusts and tunes the description of resources in real-time, by understanding user's behavior (what's the user looking for? aka behavioral targeting), catching up the public trends etc..
3. The framework optimize both publishers and advertisers profit (for example maximize ads' CTR - click through rate) by using adaptive learning or stochastic optimization techniques such like genetic programming.
4. Be able to use non real-time feedback to improve the outcome. (because the on-line advertising mostly takes a long time to measure the conversion result)
5. The framework allows web resources to learn descriptions from other web resources

In order to achieve this, I need a evaluation or a heuristic function to guide the system. The heuristic function for overall performance is straight forward, I can use CTR or daily income to measure the performance of current description. But this is far from realistic, for example regarding to feature 5, how can we select good resources? How can we filter out bad resources? Although traditional NLP and classifier (labeling, keyword extraction etc) can filter out most bad resources, but this still can lead to a wrong direction, what I'm looking for is a intelligent web can evolve by itself. I think this could be a MI system, a system can learn from and guided by human, just like what you said: the most important aspect for MI system is to be able to adopt changes in dynamic environment.

People will argue that reinforcement learning and deep learning could address the dynamic problems, in theoretic yes - if we have a large enough finite training data.

I don't know if it's possible that we can have a MI system to be used in real-time scenario and require minimum or reasonable amount of interaction from human.


2016-01-11
==========

Quoting Wolfgang Stuerzlinger <w.s@sfu.ca>:

> 2 things come immediately to mind:
> - have the system detect when the model does not predict the data
> well enough.
> - give the user the ability to add additional information to the model
>
> In both cases the system has to give the user some options as to how
> to adapt the model, e.g., by offering potential predictive terms that
> can be added to the model. Then let the user decide which one to add.
> This also means that any additions need to be easily understandable
> by the user. This likely means a hybrid model, say deep learning plus
> simple linear terms added by user. In essence, this allows the user
> to bridge the short-time deficiency when there is not enough data for
> the system to learn the adaptation by itself.
>
> Wolfgang



Hi professor Wolfgang,

Thank you for your advises!


Up to this point, I'm confused about the difference between machine learning and MI system, both of them require labeled data to train the model, the machine learning application learns what human think is correct, it takes inputs that manually picked/labeled by human.


> - have the system detect when the model does not predict the data
> well enough.
I understand that MI system can build connection between machine and human, it also provides feedback and reports. But we can also achieve this by set a threshold for the evaluation metrics of machine learning applications. What's the main difference?


> - give the user the ability to add additional information to the model
The online advertising system is a feedback system, human provide feedback to the system of whether the impression is a successful impression or not by click the ads.
And this:
> offering potential predictive terms that can be added to the model. Then let the user decide which one to add.
can be implemented as presenting different impressions to user and let user to decide/click the impression that they think is most related to their interests. From this view, it's more like a machine learning application that update the model with incoming labeled data.

According to this, can we consider an adaptive web service as a MI system?

Best,
Yubo


Just two more questions...

Is the necessary condition of a MI system is to have at least one deterministic module that provides reliable insight? (- have the system detect when the model does not predict the data well enough.)

I have another question: can both party in a MI system be machines? I attached a example in this mail, if I design a MI system that create connections between web resources, should I consider the green circled part as a MI system or the red circled part as a MI System?