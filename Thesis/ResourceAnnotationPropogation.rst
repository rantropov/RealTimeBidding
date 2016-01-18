The thesis is about a framework to describe publisher's resources using Semantic Web in order to maximize the publisher and advertiser's profit. The framework has following features:

1. Be adaptive to the dynamic web, adopt the best (most accurate) description for current browser (user) in real-time.
2. The framework adjusts and tunes the description of resources in real-time, by understanding user's behavior (what's the user looking for? aka behavioral targeting), catching up the public trends etc..
3. The framework optimize both publishers and advertisers profit (for example maximize ads' CTR - click through rate) by using adaptive learning or stochastic optimization techniques such like genetic programming.
4. Be able to use non real-time feedback to improve the outcome. (because the on-line advertising mostly takes a long time to measure the conversion result)
5. The framework allows web resources to learn descriptions from other web resources

In order to achieve this, I need a evaluation or a heuristic function to guide the system. The heuristic function for overall performance is straight forward, I can use CTR or daily income to measure the performance of current description. But this is far from realistic, for example regarding to feature 5, how can we select good resources? How can we filter out bad resources? Although traditional NLP and classifier (labeling, keyword extraction etc) can filter out most bad resources, but this still can lead to a wrong direction, what I'm looking for is a intelligent web can evolve by itself. I think this could be a MI system, a system can learn from and guided by human, just like what you said: the most important aspect for MI system is to be able to adopt changes in dynamic environment.

People will argue that reinforcement learning and deep learning could address the dynamic problems, in theoretic yes - if we have a large enough finite training data.

I don't know if it's possible that we can have a


Thesis A adaptive learning publisher resource description framework
**************************************************************************
By linking resources in web, a universal data-sharing framework may allow web system/server/application to learn from Internet. Semantic web provide such inference and learning ability to WWW. 


•	Chapter 1. Ontology mapping and learning, RDF in online advertising
•	Chapter 2. Automate web resource annotator
o	Learning from relative resources descriptions
•	Genetic programming learning [Chapter 3]
o	Apply learned (optimal) description to own resource
o	Adaptive, high diversity, high dynamic automation markup framework

•	Chapter 3. Evolutionary web –evolutionary programming optimization in graph database
•	Chapter 4. Diversity is better – niche market


Chapter 2. Automate web resource annotator
**************************************************************************
Can be used in local application (search engines such like Google, Yahoo!; intranet application such like Facebook, Linked-in) or in global domain (use as a WWW infrastructure) 
This system only needs few seed during initialization.
Keywords: Adaptive learning, unsupervised learning, automate annotation, ontology learning
One of the major obstacle blocking the propagation of semantic web is lacking of efficient automates web resources annotating method. 
A automate annotation agent should able to learn ontology and describe given resources using learned ontology (the optimal mapping function)
There exist many ontology-learning methods. System using these methods could learn ontologies to annotate any unlabeled entities (new entities). The system just need to be given a few seed resources during initialization in order to discover new ontology (become a unsupervised system).
Chapter 3. Evolutionary web
How web resources evolve by learning from other resources, an evolution algorithm of ontology learning and evaluation. 
Keywords: optimization, genetic programming, pattern recognition, query optimization.
Query optimization of search engine.

Application 1:
**************************************************************************
Adaptive ranking system 
 - A supervised learning adds ranking solver.



Application 2:
**************************************************************************
Effective quality measurement 
 -Ads quality and quality score evaluator

How to evaluate ads quality?
How to achieve golden standard (mutually agreed concept)?



Application 3:
**************************************************************************
Probabilistic search and approximation
This system parse user knowledge base and map target knowledge base (ontology) to known knowledge base in given time and accuracy constraints. Such system is like probabilistic GPS system. The probabilistic locating system combined GPS and probabilistic system, GPS provide an approximate range as a local map, than probabilistic search are running on the local map.

So the mapping has 2 procedures:
•	An approximation algorithm to constrain the search to a local graph search
•	An probabilistic search algorithm to search the result in local graph


Application 4:
**************************************************************************
Interests classifier
Audience targeting, interests prediction-using cookies.

Application 4.1:
**************************************************************************
Interests classifier - cookie tracking
Each webpage has RDF description build in it. A browser’s history formed a set of queries (sub-graphs) in graph database, the goal is to connect sub-graphs, and compute the aggregated graph query.
Three scenarios:
•	If sub-graphs are interconnected, just simply connect sub-graphs (entity/ontology mapping is needed).
•	If sub-graphs are disjointed graphs, expand the sub-graphs to compute intersection for each graph. Return the intersection of sub-graphs as result. (Expansion techniques: term expansion, ontology mapping)
•	If sub-graphs are disjointed graphs, calculate the distance and similarity for sub-graphs, TO BE CONTINUED



Application 5:
**************************************************************************
DSP bidding algorithm, term expansion
Bidding algorithm, term expansion, ads match and bid.


Target ontology mapping, a approximate reasoning engine to build user ontology in real-time
Link to application 3
