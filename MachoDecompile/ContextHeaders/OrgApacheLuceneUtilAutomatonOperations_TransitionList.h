// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILAUTOMATONOPERATIONS_TRANSITIONLIST_H
#define ORGAPACHELUCENEUTILAUTOMATONOPERATIONS_TRANSITIONLIST_H


#import <Foundation/Foundation.h>

#import "IOSIntArray.h"

@interface OrgApacheLuceneUtilAutomatonOperations_TransitionList : NSObject {
    IOSIntArray *transitions_;
    int next_;
}




-(void)addWithOrgApacheLuceneUtilAutomatonTransition:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif