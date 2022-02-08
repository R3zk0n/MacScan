// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILAUTOMATONOPERATIONS_POINTTRANSITIONSET_H
#define ORGAPACHELUCENEUTILAUTOMATONOPERATIONS_POINTTRANSITIONSET_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "JavaUtilHashMap.h"

@interface OrgApacheLuceneUtilAutomatonOperations_PointTransitionSet : NSObject {
    int count_;
    IOSObjectArray *points_;
    JavaUtilHashMap *map_;
    BOOL useHash_;
}




-(id)nextWithInt:(int)arg0 ;
-(id)findWithInt:(int)arg0 ;
-(void)reset;
-(void)sort;
-(void)addWithOrgApacheLuceneUtilAutomatonTransition:(id)arg0 ;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif