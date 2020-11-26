//
//  MenuNV.swift
//  Example
//
//  Created by John Blaine on 11/26/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

import UIKit

class MenuNV: UINavigationController {

    override func viewDidLoad() {
        super.viewDidLoad()

        let vc = MenuVC()
        self.pushViewController(vc, animated: false)
    }
    
}
