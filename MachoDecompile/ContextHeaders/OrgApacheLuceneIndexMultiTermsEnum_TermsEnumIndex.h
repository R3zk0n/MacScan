// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMULTITERMSENUM_TERMSENUMINDEX_H
#define ORGAPACHELUCENEINDEXMULTITERMSENUM_TERMSENUMINDEX_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexTermsEnum.h"

@interface OrgApacheLuceneIndexMultiTermsEnum_TermsEnumIndex : NSObject {
    int subIndex_;
    OrgApacheLuceneIndexTermsEnum *termsEnum_;
}




-(id)initWithOrgApacheLuceneIndexTermsEnum:(id)arg0 withInt:(int)arg1 ;
-(void)dealloc;
+(void)initialize;


@end


#endif