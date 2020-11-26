//
//  VideoNavigationController.swift
//  Example
//
//  Created by John Blaine on 11/24/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

import UIKit

class VideoNavigationController: UINavigationController {
    
    override func viewDidLoad() {
        super.viewDidLoad()

        let vc = VideoViewController()
        self.pushViewController(vc, animated: false)
    }
    
}
