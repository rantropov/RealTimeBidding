__author__ = 'charles'
import sys, traceback, random

'''
A way for self-checking is to set a bid quality score threshold, to check if bid decision and bid quality score consistant
'''
class Bidder(object):
    def __init__(self):
        self.MAX_BID = 5
        pass


    def bid(self, input_feature_vector, configuration, eval_function):
        impression = {
            "input": input_feature_vector,
            "publisher_setting": configuration,
            "eval_function": eval_function
        }
        bid_price = self.price_bidding(impression)
        # probability of either bid on this impression or not
        bid_decision = self.bid_decision(impression)
        max_bid_ratio = random.randint(1, self.MAX_BID)
        # weight
        # - apply bigger value to deploy an aggressive strategy
        # - apply lower value to deploy a conservative strategy
        weight = random.uniform(1, max_bid_ratio)
        return bid_price * bid_decision * weight

    def price_bidding(self, impression):
        price = impression["eval_function"](impression["input"], impression(["publisher_setting"]))
        return price
    
    def bid_decision(self, impression):
        impression_quality = self.impression_quality_score(impression)
        # todo Use random value for now
        bid_decision = bool(random.getrandbits(1))
        return bid_decision

    def impression_quality_score(self, impression):
        publisher_score = self.evaluate_publisher(impression)
        #todo Use random value for now
        return random.uniform(0, 1) * publisher_score

    def evaluate_publisher(self, impression):
        # todo Use random value for now
        score = random.uniform(0, 1)
        return score



if __name__ == "__main__":
    test = Bidder()
    impression = None
    print test.evaluate_publisher(impression)
