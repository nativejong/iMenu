//
//  ViewController.swift
//  Example
//
//  Created by John Blaine on 9/27/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

import UIKit
import iMusic

class ViewController: UIViewController {
//    var music : iMusic?

    override func viewDidLoad() {
        super.viewDidLoad()
        
//        music = iMusic(frame: CGRect.zero, video: true)
//        self.view.addSubview(music!)
    }

    override func viewWillLayoutSubviews() {
        let w = self.view.frame.size.width;
        let h = self.view.frame.size.height;
        
//        music?.frame = CGRect(x: w * 0.0, y: h * 0.05, width: w * 1.0, height: h * 0.95)
    }

}

