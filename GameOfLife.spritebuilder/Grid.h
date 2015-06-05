//
//  Grid.h
//  GameOfLife
//
//  Created by Matthew Huang on 6/4/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

- (void)evolveStep;
- (BOOL)isIndexValidForX:(int)x andY:(int)y;
- (void)countNeighbors;
- (void)updateCreatures;

@end
