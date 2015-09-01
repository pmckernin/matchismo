//
//  Card.h
//  Matchismo
//
//  Created by Patrick McKernin on 9/1/15.
//  Copyright (c) 2015 Patrick McKernin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;
@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=inMatched) BOOL matched;

- (int)match:(Card *)otherCards;


@end
