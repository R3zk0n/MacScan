// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSDOCVALUESCONSUMER_$10_$1_H
#define ORGAPACHELUCENECODECSDOCVALUESCONSUMER_$10_$1_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneCodecsDocValuesConsumer_$10.h"
#import "JavaUtilIterator-Protocol.h"
#import "JavaUtilIterator-Protocol.h"
#import "JavaUtilIterator-Protocol.h"

@interface OrgApacheLuceneCodecsDocValuesConsumer_$10_$1 : NSObject <JavaUtilIterator>

 {
    OrgApacheLuceneCodecsDocValuesConsumer_$10 *this$0_;
    id<JavaUtilIterator> *val$countIterator_;
    id<JavaUtilIterator> *val$valuesIterator_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)hasNext;
-(id)next;
-(void)remove;
-(id)initWithOrgApacheLuceneCodecsDocValuesConsumer_$10:(id)arg0 withJavaUtilIterator:(id)arg1 withJavaUtilIterator:(id)arg2 ;
-(void)dealloc;


@end


#endif