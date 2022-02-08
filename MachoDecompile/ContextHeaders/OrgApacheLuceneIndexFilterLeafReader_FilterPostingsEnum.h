// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXFILTERLEAFREADER_FILTERPOSTINGSENUM_H
#define ORGAPACHELUCENEINDEXFILTERLEAFREADER_FILTERPOSTINGSENUM_H



#import "OrgApacheLuceneIndexPostingsEnum.h"

@interface OrgApacheLuceneIndexFilterLeafReader_FilterPostingsEnum : OrgApacheLuceneIndexPostingsEnum {
    OrgApacheLuceneIndexPostingsEnum *in_;
}




-(id)initWithOrgApacheLuceneIndexPostingsEnum:(id)arg0 ;
-(id)attributes;
-(int)docID;
-(int)freq;
-(int)nextDoc;
-(int)advanceWithInt:(int)arg0 ;
-(int)nextPosition;
-(int)startOffset;
-(int)endOffset;
-(id)getPayload;
-(NSInteger)cost;
-(void)dealloc;


@end


#endif