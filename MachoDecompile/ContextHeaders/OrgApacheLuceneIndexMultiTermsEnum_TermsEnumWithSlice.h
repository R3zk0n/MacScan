// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMULTITERMSENUM_TERMSENUMWITHSLICE_H
#define ORGAPACHELUCENEINDEXMULTITERMSENUM_TERMSENUMWITHSLICE_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexTermsEnum.h"
#import "OrgApacheLuceneUtilBytesRef.h"
#import "OrgApacheLuceneIndexReaderSlice.h"

@interface OrgApacheLuceneIndexMultiTermsEnum_TermsEnumWithSlice : NSObject {
    OrgApacheLuceneIndexTermsEnum *terms_;
    OrgApacheLuceneUtilBytesRef *current_;
    int index_;
    OrgApacheLuceneIndexReaderSlice *subSlice_;
}




-(id)initWithInt:(int)arg0 withOrgApacheLuceneIndexReaderSlice:(id)arg1 ;
-(void)resetWithOrgApacheLuceneIndexTermsEnum:(id)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 ;
-(id)description;
-(void)dealloc;


@end


#endif