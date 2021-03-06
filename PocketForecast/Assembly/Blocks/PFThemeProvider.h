////////////////////////////////////////////////////////////////////////////////
//
//  TYPHOON FRAMEWORK
//  Copyright 2013, Jasper Blues & Contributors
//  All Rights Reserved.
//
//  NOTICE: The authors permit you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>
#import "TyphoonAssembly.h"

/**
* This assembly illustrates the use of several concepts: factory-components, collections, and type-converters.
*/
@interface PFThemeProvider : TyphoonAssembly

- (id)currentTheme;

- (id)cloudsOverTheCityTheme;

- (id)lightsInTheRainTheme;

- (id)beachTheme;

- (id)sunsetTheme;

@end