// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILAUTOMATONSORTEDINTSET_FROZENINTSET_H
#define ORGAPACHELUCENEUTILAUTOMATONSORTEDINTSET_FROZENINTSET_H


#import <Foundation/Foundation.h>

#import "IOSIntArray.h"

@interface OrgApacheLuceneUtilAutomatonSortedIntSet_FrozenIntSet : NSObject {
    IOSIntArray *values_;
    int hashCode_;
    int state_;
}




-(id)initWithIntArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)initWithInt:(int)arg0 withInt:(int)arg1 ;
-(NSUInteger)hash;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif