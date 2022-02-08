// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILAUTOMATONOPERATIONS_POINTTRANSITIONS_H
#define ORGAPACHELUCENEUTILAUTOMATONOPERATIONS_POINTTRANSITIONS_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilAutomatonOperations_TransitionList.h"
#import "JavaLangComparable-Protocol.h"

@interface OrgApacheLuceneUtilAutomatonOperations_PointTransitions : NSObject <JavaLangComparable>

 {
    int point_;
    OrgApacheLuceneUtilAutomatonOperations_TransitionList *ends_;
    OrgApacheLuceneUtilAutomatonOperations_TransitionList *starts_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(int)compareToWithId:(id)arg0 ;
-(void)resetWithInt:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif