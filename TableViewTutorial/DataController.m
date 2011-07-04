//
//  DataController.m
//  TableViewTutorial
//
//  Created by Sean Che on 11-06-16.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "DataController.h"


@implementation DataController

-(unsigned)countOfList
{
    return [list count];
}
-(id)objectInListAtIndex:(unsigned)theIndex
{
    return [list objectAtIndex:theIndex];
}
-(void)addData:(NSString*)data;
{
    [list addObject:data];
}
-(void)removeDataAtIndex:(unsigned)theIndex;
{
    [list removeObjectAtIndex:theIndex];
}

-(void)setList:(NSMutableArray *)newList
{
    if(list != newList)
    {
        [list release];
        list = [newList mutableCopy];
    }
}

-(id)init
{
    if(self = [super init])
    {
        NSMutableArray *localList = [[NSMutableArray alloc] init];
        self.list = localList;
        [localList release];
        
        [self addData:@"Item 1"];
        [self addData:@"Item 2"];
    }
    return self;
}

-(void)dealloc
{
    [list release];
    [super dealloc];
}
@end
