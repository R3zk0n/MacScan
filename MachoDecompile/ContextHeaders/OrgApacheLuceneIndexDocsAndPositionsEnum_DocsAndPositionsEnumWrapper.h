// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXDOCSANDPOSITIONSENUM_DOCSANDPOSITIONSENUMWRAPPER_H
#define ORGAPACHELUCENEINDEXDOCSANDPOSITIONSENUM_DOCSANDPOSITIONSENUMWRAPPER_H



#import "OrgApacheLuceneIndexDocsAndPositionsEnum.h"
#import "OrgApacheLuceneIndexPostingsEnum.h"
#import "OrgApacheLuceneUtilBits-Protocol.h"

@interface OrgApacheLuceneIndexDocsAndPositionsEnum_DocsAndPositionsEnumWrapper : OrgApacheLuceneIndexDocsAndPositionsEnum {
    OrgApacheLuceneIndexPostingsEnum *in_;
    id<OrgApacheLuceneUtilBits> *liveDocs_;
}




-(id)initWithOrgApacheLuceneIndexPostingsEnum:(id)arg0 withOrgApacheLuceneUtilBits:(id)arg1 ;
-(int)doNextWithInt:(int)arg0 ;
-(int)nextPosition;
-(int)startOffset;
-(int)endOffset;
-(id)getPayload;
-(int)freq;
-(id)attributes;
-(int)docID;
-(int)nextDoc;
-(int)advanceWithInt:(int)arg0 ;
-(NSInteger)cost;
-(void)dealloc;


@end


#endif