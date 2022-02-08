// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDPACKEDINTS_READER_H
#define ORGAPACHELUCENEUTILPACKEDPACKEDINTS_READER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexNumericDocValues.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneUtilPackedPackedInts_Reader : OrgApacheLuceneIndexNumericDocValues <OrgApacheLuceneUtilAccountable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(int)getWithInt:(int)arg0 withLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(id)getChildResources;
-(id)init;


@end


#endif