// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXFILTERLEAFREADER_FILTERFIELDS_H
#define ORGAPACHELUCENEINDEXFILTERLEAFREADER_FILTERFIELDS_H



#import "OrgApacheLuceneIndexFields.h"

@interface OrgApacheLuceneIndexFilterLeafReader_FilterFields : OrgApacheLuceneIndexFields {
    OrgApacheLuceneIndexFields *in_;
}




-(id)initWithOrgApacheLuceneIndexFields:(id)arg0 ;
-(id)iterator;
-(id)termsWithNSString:(id)arg0 ;
-(int)size;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;


@end


#endif