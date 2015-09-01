//
//  Deck.h
//  Matchismo
//
//  Created by Patrick McKernin on 9/1/15.
//  Copyright (c) 2015 Patrick McKernin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"


@interface Deck : NSObject

-(void)addCard:(Card *)card atTop:(BOOL)atTop;
-(void)addCard:(Card *)card;


-(Card *)drawRandomCard;


@end
