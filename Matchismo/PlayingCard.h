//
//  PlayingCard.h
//  Matchismo
//
//  Created by Patrick McKernin on 9/1/15.
//  Copyright (c) 2015 Patrick McKernin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *) validSuits;
+ (NSUInteger)maxRank;

@end
