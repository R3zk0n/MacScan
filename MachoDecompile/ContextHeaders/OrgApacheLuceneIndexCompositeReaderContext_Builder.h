// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXCOMPOSITEREADERCONTEXT_BUILDER_H
#define ORGAPACHELUCENEINDEXCOMPOSITEREADERCONTEXT_BUILDER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexCompositeReader.h"
#import "JavaUtilList-Protocol.h"

@interface OrgApacheLuceneIndexCompositeReaderContext_Builder : NSObject {
    OrgApacheLuceneIndexCompositeReader *reader_;
    id<JavaUtilList> *leaves_;
    int leafDocBase_;
}




-(id)initWithOrgApacheLuceneIndexCompositeReader:(id)arg0 ;
-(id)build;
-(id)buildWithOrgApacheLuceneIndexCompositeReaderContext:(id)arg0 withOrgApacheLuceneIndexIndexReader:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)dealloc;


@end


#endif