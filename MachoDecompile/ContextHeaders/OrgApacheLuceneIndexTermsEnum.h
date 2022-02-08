// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXTERMSENUM_H
#define ORGAPACHELUCENEINDEXTERMSENUM_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilAttributeSource.h"
#import "OrgApacheLuceneUtilBytesRefIterator-Protocol.h"

@interface OrgApacheLuceneIndexTermsEnum : NSObject <OrgApacheLuceneUtilBytesRefIterator>

 {
    OrgApacheLuceneUtilAttributeSource *atts_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)attributes;
-(BOOL)seekExactWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)seekExactWithOrgApacheLuceneUtilBytesRef:(id)arg0 withOrgApacheLuceneIndexTermState:(id)arg1 ;
-(id)postingsWithOrgApacheLuceneIndexPostingsEnum:(id)arg0 ;
-(id)termState;
-(id)docsWithOrgApacheLuceneUtilBits:(id)arg0 withOrgApacheLuceneIndexDocsEnum:(id)arg1 ;
-(id)docsWithOrgApacheLuceneUtilBits:(id)arg0 withOrgApacheLuceneIndexDocsEnum:(id)arg1 withInt:(int)arg2 ;
-(id)docsAndPositionsWithOrgApacheLuceneUtilBits:(id)arg0 withOrgApacheLuceneIndexDocsAndPositionsEnum:(id)arg1 ;
-(id)docsAndPositionsWithOrgApacheLuceneUtilBits:(id)arg0 withOrgApacheLuceneIndexDocsAndPositionsEnum:(id)arg1 withInt:(int)arg2 ;
-(void)dealloc;
+(void)initialize;


@end


#endif