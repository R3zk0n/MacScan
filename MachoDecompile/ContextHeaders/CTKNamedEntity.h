// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef CTKNAMEDENTITY_H
#define CTKNAMEDENTITY_H


#import <Foundation/Foundation.h>


@interface CTKNamedEntity : NSObject

@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *tag; // ivar: _tag
@property (readonly, nonatomic) NSUInteger firstOccurrence; // ivar: _firstOccurrence
@property (nonatomic) NSUInteger count; // ivar: _count
@property (nonatomic) float score; // ivar: _score


-(id)initWithName:(id)arg0 firstOccurrence:(NSUInteger)arg1 tagType:(id)arg2 ;
-(void)incOccurenceWithPosition:(NSUInteger)arg0 ;


@end


#endif