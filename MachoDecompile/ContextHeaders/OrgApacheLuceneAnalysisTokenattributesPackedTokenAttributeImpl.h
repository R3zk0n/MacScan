// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEANALYSISTOKENATTRIBUTESPACKEDTOKENATTRIBUTEIMPL_H
#define ORGAPACHELUCENEANALYSISTOKENATTRIBUTESPACKEDTOKENATTRIBUTEIMPL_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneAnalysisTokenattributesCharTermAttributeImpl.h"
#import "OrgApacheLuceneAnalysisTokenattributesTypeAttribute-Protocol.h"
#import "OrgApacheLuceneAnalysisTokenattributesPositionIncrementAttribute-Protocol.h"
#import "OrgApacheLuceneAnalysisTokenattributesPositionLengthAttribute-Protocol.h"
#import "OrgApacheLuceneAnalysisTokenattributesOffsetAttribute-Protocol.h"

@interface OrgApacheLuceneAnalysisTokenattributesPackedTokenAttributeImpl : OrgApacheLuceneAnalysisTokenattributesCharTermAttributeImpl <OrgApacheLuceneAnalysisTokenattributesTypeAttribute, OrgApacheLuceneAnalysisTokenattributesPositionIncrementAttribute, OrgApacheLuceneAnalysisTokenattributesPositionLengthAttribute, OrgApacheLuceneAnalysisTokenattributesOffsetAttribute>

 {
    int startOffset_;
    int endOffset_;
    NSString *type_;
    int positionIncrement_;
    int positionLength_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)setPositionIncrementWithInt:(int)arg0 ;
-(int)getPositionIncrement;
-(void)setPositionLengthWithInt:(int)arg0 ;
-(int)getPositionLength;
-(int)startOffset;
-(int)endOffset;
-(void)setOffsetWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)type;
-(void)setTypeWithNSString:(id)arg0 ;
-(void)clear;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(void)copyToWithOrgApacheLuceneUtilAttributeImpl:(id)arg0 ;
-(void)reflectWithWithOrgApacheLuceneUtilAttributeReflector:(id)arg0 ;
-(void)dealloc;


@end


#endif