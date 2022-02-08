// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXCOMPOSITEREADERCONTEXT_H
#define ORGAPACHELUCENEINDEXCOMPOSITEREADERCONTEXT_H



#import "OrgApacheLuceneIndexIndexReaderContext.h"
#import "OrgApacheLuceneIndexCompositeReader.h"
#import "JavaUtilList-Protocol.h"
#import "JavaUtilList-Protocol.h"

@interface OrgApacheLuceneIndexCompositeReaderContext : OrgApacheLuceneIndexIndexReaderContext {
    id<JavaUtilList> *children_;
    id<JavaUtilList> *leaves_;
    OrgApacheLuceneIndexCompositeReader *reader_;
}




-(id)initWithOrgApacheLuceneIndexCompositeReaderContext:(id)arg0 withOrgApacheLuceneIndexCompositeReader:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withJavaUtilList:(id)arg4 ;
-(id)initWithOrgApacheLuceneIndexCompositeReader:(id)arg0 withJavaUtilList:(id)arg1 withJavaUtilList:(id)arg2 ;
-(id)initWithOrgApacheLuceneIndexCompositeReaderContext:(id)arg0 withOrgApacheLuceneIndexCompositeReader:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withJavaUtilList:(id)arg4 withJavaUtilList:(id)arg5 ;
-(id)leaves;
-(id)children;
-(id)reader;
-(void)dealloc;
+(id)createWithOrgApacheLuceneIndexCompositeReader:(id)arg0 ;


@end


#endif