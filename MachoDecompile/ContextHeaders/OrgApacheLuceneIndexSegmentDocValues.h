// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXSEGMENTDOCVALUES_H
#define ORGAPACHELUCENEINDEXSEGMENTDOCVALUES_H


#import <Foundation/Foundation.h>

#import "JavaUtilMap-Protocol.h"

@interface OrgApacheLuceneIndexSegmentDocValues : NSObject {
    id<JavaUtilMap> *genDVProducers_;
}




-(id)newDocValuesProducerWithOrgApacheLuceneIndexSegmentCommitInfo:(id)arg0 withOrgApacheLuceneStoreDirectory:(id)arg1 withJavaLangLong:(id)arg2 withOrgApacheLuceneIndexFieldInfos:(id)arg3 ;
-(id)getDocValuesProducerWithLong:(NSInteger)arg0 withOrgApacheLuceneIndexSegmentCommitInfo:(id)arg1 withOrgApacheLuceneStoreDirectory:(id)arg2 withOrgApacheLuceneIndexFieldInfos:(id)arg3 ;
-(void)decRefWithJavaUtilList:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif