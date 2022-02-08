// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREINDEXINPUT_H
#define ORGAPACHELUCENESTOREINDEXINPUT_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreDataInput.h"
#import "NSCopying-Protocol.h"
#import "JavaIoCloseable-Protocol.h"

@interface OrgApacheLuceneStoreIndexInput : OrgApacheLuceneStoreDataInput <NSCopying, JavaIoCloseable>

 {
    NSString *resourceDescription_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 ;
-(id)clone;
-(id)getFullSliceDescriptionWithNSString:(id)arg0 ;
-(id)randomAccessSliceWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(void)dealloc;


@end


#endif