// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXDOCVALUES_$6_H
#define ORGAPACHELUCENEINDEXDOCVALUES_$6_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexSortedNumericDocValues.h"
#import "OrgApacheLuceneUtilBits-Protocol.h"

@interface OrgApacheLuceneIndexDocValues_$6 : NSObject <OrgApacheLuceneUtilBits>

 {
    OrgApacheLuceneIndexSortedNumericDocValues *val$dv_;
    int val$maxDoc_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)getWithInt:(int)arg0 ;
-(int)length;
-(id)initWithOrgApacheLuceneIndexSortedNumericDocValues:(id)arg0 withInt:(int)arg1 ;
-(void)dealloc;


@end


#endif