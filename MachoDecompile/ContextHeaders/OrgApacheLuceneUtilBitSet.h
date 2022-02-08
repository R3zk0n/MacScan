// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILBITSET_H
#define ORGAPACHELUCENEUTILBITSET_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilMutableBits-Protocol.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneUtilBitSet : NSObject <OrgApacheLuceneUtilMutableBits, OrgApacheLuceneUtilAccountable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(int)approximateCardinality;
-(void)assertUnpositionedWithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;
-(void)or__WithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;
-(void)leapFrogWithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 withOrgApacheLuceneUtilBitSet_LeapFrogCallBack:(id)arg1 ;
-(void)and__WithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;
-(void)andNotWithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;
-(id)getChildResources;
-(id)init;
+(id)ofWithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 withInt:(int)arg1 ;


@end


#endif