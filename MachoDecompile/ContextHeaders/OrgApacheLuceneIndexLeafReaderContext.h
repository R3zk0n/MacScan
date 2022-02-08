// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXLEAFREADERCONTEXT_H
#define ORGAPACHELUCENEINDEXLEAFREADERCONTEXT_H



#import "OrgApacheLuceneIndexIndexReaderContext.h"
#import "OrgApacheLuceneIndexLeafReader.h"
#import "JavaUtilList-Protocol.h"

@interface OrgApacheLuceneIndexLeafReaderContext : OrgApacheLuceneIndexIndexReaderContext {
    int ord_;
    int docBase_;
    OrgApacheLuceneIndexLeafReader *reader_;
    id<JavaUtilList> *leaves_;
}




-(id)initWithOrgApacheLuceneIndexCompositeReaderContext:(id)arg0 withOrgApacheLuceneIndexLeafReader:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 ;
-(id)initWithOrgApacheLuceneIndexLeafReader:(id)arg0 ;
-(id)leaves;
-(id)children;
-(id)reader;
-(id)description;
-(void)dealloc;
-(void)__javaClone;


@end


#endif