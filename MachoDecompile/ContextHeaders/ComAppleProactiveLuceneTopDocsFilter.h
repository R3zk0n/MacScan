// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLEPROACTIVELUCENETOPDOCSFILTER_H
#define COMAPPLEPROACTIVELUCENETOPDOCSFILTER_H



#import "OrgApacheLuceneSearchFilter.h"
#import "IOSObjectArray.h"

@interface ComAppleProactiveLuceneTopDocsFilter : OrgApacheLuceneSearchFilter {
    IOSObjectArray *scoreDocs_;
}




-(id)initWithOrgApacheLuceneSearchTopDocs:(id)arg0 ;
-(id)toStringWithNSString:(id)arg0 ;
-(id)getDocIdSetWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 withOrgApacheLuceneUtilBits:(id)arg1 ;
-(void)dealloc;


@end


#endif