//
//  Card.m
//  Matchismo
//
//  Created by Patrick McKernin on 9/1/15.
//  Copyright (c) 2015 Patrick McKernin. All rights reserved.
//

#import "Card.h"

@interface Card()

@end


@implementation Card

-(int)match:(NSArray *)otherCards {
    
    int score = 0;
    
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    
    return score;
}


@end
