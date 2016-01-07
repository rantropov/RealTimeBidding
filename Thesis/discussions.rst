
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