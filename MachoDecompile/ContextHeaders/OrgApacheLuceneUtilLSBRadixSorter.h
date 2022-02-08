// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILLSBRADIXSORTER_H
#define ORGAPACHELUCENEUTILLSBRADIXSORTER_H


#import <Foundation/Foundation.h>

#import "IOSIntArray.h"

@interface OrgApacheLuceneUtilLSBRadixSorter : NSObject {
    IOSIntArray *histogram_;
    IOSIntArray *buffer_;
}




-(void)sortWithIntArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)init;
-(void)dealloc;


@end


#endif