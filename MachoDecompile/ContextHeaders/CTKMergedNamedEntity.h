// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef CTKMERGEDNAMEDENTITY_H
#define CTKMERGEDNAMEDENTITY_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>


@interface CTKMergedNamedEntity : NSObject {
    NSMutableSet *_sourceNamedEntities;
}


@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger firstOccurrence; // ivar: _firstOccurrence
@property (nonatomic) NSUInteger count; // ivar: _count
@property (nonatomic) float score; // ivar: _score


-(id)initWithEntity:(id)arg0 ;
-(id)sourceNamedEntities;
-(void)mergeWith:(id)arg0 ;
-(NSInteger)descendingScoreCompare:(id)arg0 ;


@end


#endif