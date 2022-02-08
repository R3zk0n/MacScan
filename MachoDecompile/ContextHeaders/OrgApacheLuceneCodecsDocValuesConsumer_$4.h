// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSDOCVALUESCONSUMER_$4_H
#define ORGAPACHELUCENECODECSDOCVALUESCONSUMER_$4_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "OrgApacheLuceneIndexMergeState.h"
#import "JavaLangIterable-Protocol.h"

@interface OrgApacheLuceneCodecsDocValuesConsumer_$4 : NSObject <JavaLangIterable>

 {
    int val$numReaders_;
    IOSObjectArray *val$dvs_;
    OrgApacheLuceneIndexMergeState *val$mergeState_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)iterator;
-(id)initWithInt:(int)arg0 withOrgApacheLuceneIndexSortedNumericDocValuesArray:(id)arg1 withOrgApacheLuceneIndexMergeState:(id)arg2 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;


@end


#endif