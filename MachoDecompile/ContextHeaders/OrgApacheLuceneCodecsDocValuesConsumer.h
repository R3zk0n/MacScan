// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSDOCVALUESCONSUMER_H
#define ORGAPACHELUCENECODECSDOCVALUESCONSUMER_H


#import <Foundation/Foundation.h>

#import "JavaIoCloseable-Protocol.h"

@interface OrgApacheLuceneCodecsDocValuesConsumer : NSObject <JavaIoCloseable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)mergeWithOrgApacheLuceneIndexMergeState:(id)arg0 ;
-(void)mergeNumericFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneIndexMergeState:(id)arg1 withJavaUtilList:(id)arg2 withJavaUtilList:(id)arg3 ;
-(void)mergeBinaryFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneIndexMergeState:(id)arg1 withJavaUtilList:(id)arg2 withJavaUtilList:(id)arg3 ;
-(void)mergeSortedNumericFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneIndexMergeState:(id)arg1 withJavaUtilList:(id)arg2 ;
-(void)mergeSortedFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneIndexMergeState:(id)arg1 withJavaUtilList:(id)arg2 ;
-(void)mergeSortedSetFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneIndexMergeState:(id)arg1 withJavaUtilList:(id)arg2 ;
+(BOOL)isSingleValuedWithJavaLangIterable:(id)arg0 ;
+(id)singletonViewWithJavaLangIterable:(id)arg0 withJavaLangIterable:(id)arg1 withNSNumber:(id)arg2 ;


@end


#endif