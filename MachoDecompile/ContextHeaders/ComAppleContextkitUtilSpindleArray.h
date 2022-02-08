// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITUTILSPINDLEARRAY_H
#define COMAPPLECONTEXTKITUTILSPINDLEARRAY_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreIndexInput.h"
#import "IOSIntArray.h"
#import "JavaIoCloseable-Protocol.h"

@interface ComAppleContextkitUtilSpindleArray : NSObject <JavaIoCloseable>

 {
    OrgApacheLuceneStoreIndexInput *in_;
    int numEntries_;
    int entriesOffset_;
    IOSIntArray *offsets_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneStoreDirectory:(id)arg0 withNSString:(id)arg1 ;
-(id)lookupWithJavaUtilList:(id)arg0 withJavaUtilIterator:(id)arg1 ;
-(id)lookupWithComAppleContextkitUtilSpindleArray_State:(id)arg0 withJavaUtilList:(id)arg1 withJavaUtilIterator:(id)arg2 ;
-(id)readEntryDataWithComAppleContextkitUtilSpindleArray_State:(id)arg0 withComAppleContextkitUtilSpindleArray_Bucket:(id)arg1 withComAppleContextkitUtilSpindleArray_Bucket:(id)arg2 ;
-(void)close;
-(void)dealloc;


@end


#endif