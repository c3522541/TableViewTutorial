//
//  DataController.h
//  TableViewTutorial
//
//  Created by Sean Che on 11-06-16.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface DataController : NSObject {
    NSMutableArray *list;
}

-(unsigned)countOfList;
-(id)objectInListAtIndex:(unsigned)theIndex;
-(void)addData:(NSString*)data;
-(void)removeDataAtIndex:(unsigned)theIndex;

@property (nonatomic, copy, readwrite) NSMutableArray *list;
@end
