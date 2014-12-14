<?php
/**
 * @file
 * created_node.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function created_node_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'36\',
      \'uid\' => \'1\',
      \'title\' => \'Rs. 650 Off on Rs. 2199 (Select Catalogue)\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'fe80e25b-19ec-4fc8-893c-f36ccce4fc1d\',
      \'nid\' => \'36\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418228585\',
      \'changed\' => \'1418228585\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'07370796-6149-4fbd-a184-eaf56f87cda7\',
      \'revision_timestamp\' => \'1418228585\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Rs. 650 off on select catalogue on a minimum purchase of Rs. 2199. Offer valid till 15th January 2015.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Rs. 650 off on select catalogue on a minimum purchase of Rs. 2199. Offer valid till 15th January 2015.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'SHOP650\',
            \'format\' => NULL,
            \'safe_value\' => \'SHOP650\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.jabong.com\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.jabong.com\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 16:20:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-01-15 16:20:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418228585\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'59\',
        \'source\' => \'node/36\',
        \'alias\' => \'jabong-coupon/rs-650-off-rs-2199-select-catalogue\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'37\',
      \'uid\' => \'1\',
      \'title\' => \'Flat 25% Off on Rs. 350 & Above\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f15e8d23-30ed-4a9d-8ebb-c77a679b8673\',
      \'nid\' => \'37\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418228717\',
      \'changed\' => \'1418228717\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'2d525fe8-0303-4b47-8045-bd092b107987\',
      \'revision_timestamp\' => \'1418228717\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Get a flat 25% discount on a minimum order of Rs. 350. Offers are not valid on Simply Veg, Simply Non-Veg, Regular Pizzas, Combos, Stuffed garlic bread, Beverages & Desserts. Valid for online order only. Discounted pizza will be of same or lesser category.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Get a flat 25% discount on a minimum order of Rs. 350. Offers are not valid on Simply Veg, Simply Non-Veg, Regular Pizzas, Combos, Stuffed garlic bread, Beverages &amp; Desserts. Valid for online order only. Discounted pizza will be of same or lesser category.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'TMP25\',
            \'format\' => NULL,
            \'safe_value\' => \'TMP25\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://pizzaonline.dominos.co.in\',
            \'format\' => NULL,
            \'safe_value\' => \'https://pizzaonline.dominos.co.in\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 16:20:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-31 16:20:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418228717\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'60\',
        \'source\' => \'node/37\',
        \'alias\' => \'dominos-coupon/flat-25-off-rs-350-above\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'32\',
      \'uid\' => \'1\',
      \'title\' => \'Upto 50% Off on Sony Headphones\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d17896a7-a998-4129-978a-19b881721cb2\',
      \'nid\' => \'32\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418228132\',
      \'changed\' => \'1418228132\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'2e14ed04-7652-4122-8459-27f68a5a781e\',
      \'revision_timestamp\' => \'1418228132\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Upto 50% off on Sony headphones. No coupon code required.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Upto 50% off on Sony headphones. No coupon code required.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.flipkart.com/mobiles-accessories/pr?offer=b%3Amp%3Ac%3A1005caa506.&sid=tyy&affid=contact&affExtParam1=p%3AJYd2AlHroQxx\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.flipkart.com/mobiles-accessories/pr?offer=b%3Amp%3Ac%3A1005caa506.&amp;sid=tyy&amp;affid=contact&amp;affExtParam1=p%3AJYd2AlHroQxx\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 16:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-31 16:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Deal\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418228132\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'55\',
        \'source\' => \'node/32\',
        \'alias\' => \'flipkart-coupon/upto-50-off-sony-headphones\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'9\',
      \'uid\' => \'1\',
      \'title\' => \'this is only for test\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'91ba4fe2-aae3-474b-91e9-06be2964a373\',
      \'nid\' => \'9\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1416550243\',
      \'changed\' => \'1418227133\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'2efba56f-eaf0-4a89-b9ad-482eb8987c69\',
      \'revision_timestamp\' => \'1418227133\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'this is only for testthis is only for testthis is only for testthis is only for testthis is only for testthis is only for testthis is only for testthis is only for test\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>this is only for testthis is only for testthis is only for testthis is only for testthis is only for testthis is only for testthis is only for testthis is only for test</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'test50\',
            \'format\' => NULL,
            \'safe_value\' => \'test50\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'test.com\',
            \'format\' => NULL,
            \'safe_value\' => \'test.com\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-21 06:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-23 06:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1416550243\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'25\',
        \'source\' => \'node/9\',
        \'alias\' => \'myntra-coupon/only-test\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'18\',
      \'uid\' => \'1\',
      \'title\' => \'Flat 10% Off Sitewide\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c41509b4-2195-4d5c-a110-6776bfa5bf56\',
      \'nid\' => \'18\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418225899\',
      \'changed\' => \'1418226055\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'31a84633-c632-4b0a-974b-3f95d84227f4\',
      \'revision_timestamp\' => \'1418226055\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Flat 10% off on all purchase sitewide. Maximum discount of Rs. 2500 per transaction. Offer valid till 31st December\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Flat 10% off on all purchase sitewide. Maximum discount of Rs. 2500 per transaction. Offer valid till 31st December</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'EBAY10DEAL\',
            \'format\' => NULL,
            \'safe_value\' => \'EBAY10DEAL\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.ebay.in/\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.ebay.in/\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 15:40:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-01-01 15:40:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418225899\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'40\',
        \'source\' => \'node/18\',
        \'alias\' => \'ebay-coupon/flat-10-off-sitewide\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'39\',
      \'uid\' => \'1\',
      \'title\' => \'15% Cashback When You Checkout with PayUMoney\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c1c5d89e-020c-4c22-b45a-6fa5c5581159\',
      \'nid\' => \'39\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418228946\',
      \'changed\' => \'1418228946\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3242a525-7a3b-472b-94a1-4152863e6480\',
      \'revision_timestamp\' => \'1418228946\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'15% Cashback When You Checkout with PayUMoney (Max Cashback Rs.75)\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>15% Cashback When You Checkout with PayUMoney (Max Cashback Rs.75)</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://pizzaonline.dominos.co.in\',
            \'format\' => NULL,
            \'safe_value\' => \'https://pizzaonline.dominos.co.in\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 16:30:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 16:30:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Deal\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418228946\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'62\',
        \'source\' => \'node/39\',
        \'alias\' => \'dominos-coupon/15-cashback-when-you-checkout-payumoney\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'30\',
      \'uid\' => \'1\',
      \'title\' => "Minimum 50% Off on Women\'s Apparel",
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6f8efb62-febb-43b6-b2bc-1a1ff189f7b8\',
      \'nid\' => \'30\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418227990\',
      \'changed\' => \'1418227990\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3278db7c-3f12-425e-aab4-4dd67ef4d3b1\',
      \'revision_timestamp\' => \'1418227990\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Minimum 50% off on women\'s apparel listed on the landing page. No coupon code required.",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Minimum 50% off on women\'s apparel listed on the landing page. No coupon code required.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.flipkart.com/clothing/pr?sid=2oq&otracker=ch_vn_womens_clothing_main_banners_0&offer=b%3Amp%3Ac%3A1068926e13.&icmpid=clp_ban_1_b%3Amp%3Ac%3A1068926e13&affid=contact&affExtParam1=p%3Akvp5z013KpUZ\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.flipkart.com/clothing/pr?sid=2oq&amp;otracker=ch_vn_womens_clothing_main_banners_0&amp;offer=b%3Amp%3Ac%3A1068926e13.&amp;icmpid=clp_ban_1_b%3Amp%3Ac%3A1068926e13&amp;affid=contact&amp;affExtParam1=p%3Akvp5z013KpUZ\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 16:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-31 16:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Deal\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418227990\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'53\',
        \'source\' => \'node/30\',
        \'alias\' => \'flipkart-coupon/minimum-50-off-womens-apparel-0\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'38\',
      \'uid\' => \'1\',
      \'title\' => \'Flat 20% off on Rs. 350 & Above\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ee7f9825-566a-420b-b876-a8324b2755ed\',
      \'nid\' => \'38\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418228843\',
      \'changed\' => \'1418228843\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3d8729c1-a5cd-4442-b42e-830962a29760\',
      \'revision_timestamp\' => \'1418228843\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Flat 20% off on Rs. 350 & Above\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Flat 20% off on Rs. 350 &amp; Above</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'GOSF20\',
            \'format\' => NULL,
            \'safe_value\' => \'GOSF20\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://pizzaonline.dominos.co.in\',
            \'format\' => NULL,
            \'safe_value\' => \'https://pizzaonline.dominos.co.in\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 16:30:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-12 16:30:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418228843\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'61\',
        \'source\' => \'node/38\',
        \'alias\' => \'dominos-coupon/flat-20-off-rs-350-above-0\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'23\',
      \'uid\' => \'1\',
      \'title\' => \'75% Off on Hosting & 50% Off on Domain Name Together\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a9c5e5e4-122e-46a6-901e-9370a6c4fb5e\',
      \'nid\' => \'23\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418226891\',
      \'changed\' => \'1418226891\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'42e6e67c-d115-4d42-b487-785066c4d1c7\',
      \'revision_timestamp\' => \'1418226891\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Buy Shared Hosting and Domain Name. Coupon code applicable only if you buy them together.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Buy Shared Hosting and Domain Name. Coupon code applicable only if you buy them together.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'BRGOSF14\',
            \'format\' => NULL,
            \'safe_value\' => \'BRGOSF14\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.bigrock.in/?a_aid=5485e13251c2e\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.bigrock.in/?a_aid=5485e13251c2e\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 15:50:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-12 15:50:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'7\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418226891\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'46\',
        \'source\' => \'node/23\',
        \'alias\' => \'bigrock-coupon/75-off-hosting-50-off-domain-name-together\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'29\',
      \'uid\' => \'1\',
      \'title\' => "Minimum 50% Off on Women\'s Apparel",
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f15a87eb-430b-46eb-af3b-846ec3aaae88\',
      \'nid\' => \'29\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418227930\',
      \'changed\' => \'1418227930\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'4645f085-1ef4-4b73-bc2c-67bed20b7551\',
      \'revision_timestamp\' => \'1418227930\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Minimum 50% off on women\'s apparel listed on the landing page. No coupon code required.",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Minimum 50% off on women\'s apparel listed on the landing page. No coupon code required.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.flipkart.com/clothing/pr?sid=2oq&otracker=ch_vn_womens_clothing_main_banners_0&offer=b%3Amp%3Ac%3A1068926e13.&icmpid=clp_ban_1_b%3Amp%3Ac%3A1068926e13&affid=contact&affExtParam1=p%3ABXRbeEKtQHU0\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.flipkart.com/clothing/pr?sid=2oq&amp;otracker=ch_vn_womens_clothing_main_banners_0&amp;offer=b%3Amp%3Ac%3A1068926e13.&amp;icmpid=clp_ban_1_b%3Amp%3Ac%3A1068926e13&amp;affid=contact&amp;affExtParam1=p%3ABXRbeEKtQHU0\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 16:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-31 16:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Deal\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418227930\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'52\',
        \'source\' => \'node/29\',
        \'alias\' => \'flipkart-coupon/minimum-50-off-womens-apparel\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1\',
      \'uid\' => \'1\',
      \'title\' => \'25 % OFF on cloths\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'58bd4cb6-2e1b-4756-be4b-2f94785d2a6b\',
      \'nid\' => \'1\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1415902252\',
      \'changed\' => \'1418227133\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'4a0a8b6d-9c82-4421-bf58-5b537c6fefed\',
      \'revision_timestamp\' => \'1418227133\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'25 % OFF on cloth only on selected category\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>25 % OFF on cloth only on selected category</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'MYNTRA25\',
            \'format\' => NULL,
            \'safe_value\' => \'MYNTRA25\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'myntra.com\',
            \'format\' => NULL,
            \'safe_value\' => \'myntra.com\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-13 17:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-16 17:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1415902252\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'17\',
        \'source\' => \'node/1\',
        \'alias\' => \'myntra-coupon/25-off-cloths\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'7\',
      \'uid\' => \'1\',
      \'title\' => \'Upto 80% off on Select Catalogue \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8513c5f1-0222-4d5f-a2d9-b613f1089bb8\',
      \'nid\' => \'7\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1416121296\',
      \'changed\' => \'1418227133\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'641dc858-3eb3-442d-ae2c-172fabc83b68\',
      \'revision_timestamp\' => \'1418227133\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Upto 80% off on Select Catalogue  Upto 80% off on Select Catalogue  Upto 80% off on Select Catalogue \',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Upto 80% off on Select Catalogue  Upto 80% off on Select Catalogue  Upto 80% off on Select Catalogue</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Just25\',
            \'format\' => NULL,
            \'safe_value\' => \'Just25\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'rajeshsaini.com\',
            \'format\' => NULL,
            \'safe_value\' => \'rajeshsaini.com\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-15 07:00:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-16 07:00:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1416121296\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'23\',
        \'source\' => \'node/7\',
        \'alias\' => \'jabong-coupon/upto-80-off-select-catalogue\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'16\',
      \'uid\' => \'1\',
      \'title\' => \'Big Savings on Data Storage Devices\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4a06b219-3d52-44b4-965e-828585b5fb71\',
      \'nid\' => \'16\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1417331775\',
      \'changed\' => \'1418227134\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6a387c71-bcc3-4c5b-b7de-19cee491e33a\',
      \'revision_timestamp\' => \'1418227134\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Get big discounts on data storage devices like USB pen drives and on-the-go (OTG) pen drives, external hard drives, memory cards & more displayed on the landing page. No coupon code required.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Get big discounts on data storage devices like USB pen drives and on-the-go (OTG) pen drives, external hard drives, memory cards &amp; more displayed on the landing page. No coupon code required.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'flat20\',
            \'format\' => NULL,
            \'safe_value\' => \'flat20\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'amazon.in\',
            \'format\' => NULL,
            \'safe_value\' => \'amazon.in\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-30 07:20:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-04 07:20:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'6\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1417331775\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'38\',
        \'source\' => \'node/16\',
        \'alias\' => \'amazon-coupon/big-savings-data-storage-devices\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'3\',
      \'uid\' => \'1\',
      \'title\' => \'Minimum 40% off on Winter Collection\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1cb5bdca-3716-4f2c-8fd1-3f6d186887a7\',
      \'nid\' => \'3\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1415980328\',
      \'changed\' => \'1418227133\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6adf4e40-c244-4089-afdd-a2dc80775547\',
      \'revision_timestamp\' => \'1418227133\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Minimum 40% off on fall/winter collection for men and women. No coupon code required. Choose from over 5000 products like sweaters, jacktes, sweatshirts etc. listed on the landing page.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Minimum 40% off on fall/winter collection for men and women. No coupon code required. Choose from over 5000 products like sweaters, jacktes, sweatshirts etc. listed on the landing page.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'SHOP20\',
            \'format\' => NULL,
            \'safe_value\' => \'SHOP20\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.myntra.com/shopping-offer16?utm_source=aff&utm_medium=aff-coupondunia\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.myntra.com/shopping-offer16?utm_source=aff&amp;utm_medium=aff-coupondunia\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-14 15:50:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-18 15:50:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1415980328\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'19\',
        \'source\' => \'node/3\',
        \'alias\' => \'flipkart-coupon/minimum-40-off-winter-collection\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'20\',
      \'uid\' => \'1\',
      \'title\' => "Rs. 1000 Off on Women\'s Watches",
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1c40c460-cb2b-40a7-9e54-f96c01a0f62b\',
      \'nid\' => \'20\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418226199\',
      \'changed\' => \'1418226199\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'721806a0-23fb-4dea-be36-1eb266324a1f\',
      \'revision_timestamp\' => \'1418226199\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Rs. 1000 off on women\'s watches listed on the landing page. Offer valid till stock lasts.",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Rs. 1000 off on women\'s watches listed on the landing page. Offer valid till stock lasts.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'EBAYWATCH5\',
            \'format\' => NULL,
            \'safe_value\' => \'EBAYWATCH5\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 15:40:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-01-01 15:40:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418226199\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'42\',
        \'source\' => \'node/20\',
        \'alias\' => \'ebay-coupon/rs-1000-off-womens-watches\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'13\',
      \'uid\' => \'1\',
      \'title\' => \'Upto 50% off on Mobiles\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8479a672-ec52-4bbf-ae97-c76293caf963\',
      \'nid\' => \'13\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1416675861\',
      \'changed\' => \'1418227133\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'789779d1-499a-41db-9126-f1b1341e8aa3\',
      \'revision_timestamp\' => \'1418227133\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Get discounts of upto 50% on select mobiles displayed on the landing page. Choose form various brands like Apple, HTC, Lenovo, Lava, LG, Nokia, Micromax, Samsung, and more. No coupon code required.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Get discounts of upto 50% on select mobiles displayed on the landing page. Choose form various brands like Apple, HTC, Lenovo, Lava, LG, Nokia, Micromax, Samsung, and more. No coupon code required.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'DEMO50\',
            \'format\' => NULL,
            \'safe_value\' => \'DEMO50\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.ebay.in\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.ebay.in\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-22 17:00:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-24 17:00:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1416675861\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'34\',
        \'source\' => \'node/13\',
        \'alias\' => \'ebay-coupon/upto-50-off-mobiles\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'12\',
      \'uid\' => \'1\',
      \'title\' => \'Fflat 20% discount on a minimum order of Rs. 350\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d25a5d1b-8c1e-4499-b0ae-ba6045673d15\',
      \'nid\' => \'12\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1416675764\',
      \'changed\' => \'1418227133\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'8501c98e-90a1-4b5b-b360-1b2492785b87\',
      \'revision_timestamp\' => \'1418227133\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Get a flat 20% discount on a minimum order of Rs. 350. This code is not valid on Simply Veg, Simply Non-Veg Pizzas, Regular Pizzas and Combos & Beverages. Valid for online order only.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Get a flat 20% discount on a minimum order of Rs. 350. This code is not valid on Simply Veg, Simply Non-Veg Pizzas, Regular Pizzas and Combos &amp; Beverages. Valid for online order only.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'SHOP20\',
            \'format\' => NULL,
            \'safe_value\' => \'SHOP20\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.dominos.co.in/\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.dominos.co.in/\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-22 17:00:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-25 17:00:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1416675764\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'33\',
        \'source\' => \'node/12\',
        \'alias\' => \'dominos-coupon/fflat-20-discount-minimum-order-rs-350\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'25\',
      \'uid\' => \'1\',
      \'title\' => \'GOSF: Kindle Paperwhite Rs. 2000 Off\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e612024d-b282-424a-a4ee-34da58f8af13\',
      \'nid\' => \'25\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418227508\',
      \'changed\' => \'1418227508\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'99ae3a4b-fd67-4423-af4c-1cff3c0fb3d0\',
      \'revision_timestamp\' => \'1418227508\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Rs. 2000 off on Kindle Paperwhite.No coupon code required.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Rs. 2000 off on Kindle Paperwhite.No coupon code required.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(),
      \'field_coupon_url\' => array(),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 16:00:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-12 16:00:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Deal\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'6\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418227508\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'48\',
        \'source\' => \'node/25\',
        \'alias\' => \'amazon-coupon/gosf-kindle-paperwhite-rs-2000-off\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'24\',
      \'uid\' => \'1\',
      \'title\' => \'10% Off on Domains + 25% Off on Hosting\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d7436287-d93e-4cf3-8943-2e7bb175a271\',
      \'nid\' => \'24\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418227059\',
      \'changed\' => \'1418227059\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9ba38a3d-940b-4f1b-a926-68f71d16949a\',
      \'revision_timestamp\' => \'1418227059\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Get flat 10% off on domain names and flat 25% off on web hosting. Offer valid till 31st December.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Get flat 10% off on domain names and flat 25% off on web hosting. Offer valid till 31st December.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'AFFDEC\',
            \'format\' => NULL,
            \'safe_value\' => \'AFFDEC\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.bigrock.in/?a_aid=5485e13251c2e\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.bigrock.in/?a_aid=5485e13251c2e\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 16:00:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-31 16:00:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'7\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418227059\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'47\',
        \'source\' => \'node/24\',
        \'alias\' => \'bigrock-coupon/10-off-domains-25-off-hosting\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'8\',
      \'uid\' => \'1\',
      \'title\' => \'Upto 80% off on Select Catalogue \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b10b4016-c55f-4a34-ab03-2d3ad0d36413\',
      \'nid\' => \'8\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1416121349\',
      \'changed\' => \'1418227133\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9e5b5f1c-81f3-4b80-9ff9-4eb02570f404\',
      \'revision_timestamp\' => \'1418227133\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Upto 80% off on Select Catalogue  Upto 80% off on Select Catalogue \',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Upto 80% off on Select Catalogue  Upto 80% off on Select Catalogue</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'FLP80\',
            \'format\' => NULL,
            \'safe_value\' => \'FLP80\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'rajeshsaini.com\',
            \'format\' => NULL,
            \'safe_value\' => \'rajeshsaini.com\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-15 07:00:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-16 07:00:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1416121349\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'24\',
        \'source\' => \'node/8\',
        \'alias\' => \'jabong-coupon/upto-80-off-select-catalogue-0\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'35\',
      \'uid\' => \'1\',
      \'title\' => \'Rs. 500 Off on Rs. 1699 (Select Catalogue)\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c3ac3e8b-4bbd-405b-b0b0-395b12362612\',
      \'nid\' => \'35\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418228481\',
      \'changed\' => \'1418228481\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a09de064-f249-4a48-bf3b-a405ad0a2dcb\',
      \'revision_timestamp\' => \'1418228481\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Get flat Rs. 500 off on select catalogue on minimum purchase of Rs. 1699 and above by applying the coupon code. Offer valid till 12th December only.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Get flat Rs. 500 off on select catalogue on minimum purchase of Rs. 1699 and above by applying the coupon code. Offer valid till 12th December only.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'SHOP500\',
            \'format\' => NULL,
            \'safe_value\' => \'SHOP500\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.jabong.com\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.jabong.com\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 16:20:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-13 16:20:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418228481\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'58\',
        \'source\' => \'node/35\',
        \'alias\' => \'jabong-coupon/rs-500-off-rs-1699-select-catalogue\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'4\',
      \'uid\' => \'1\',
      \'title\' => \'Upto 50% off on Select Catalogue\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'158274b2-4695-40ad-8622-2733242f120b\',
      \'nid\' => \'4\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1415980460\',
      \'changed\' => \'1418227133\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a66fbb9c-86de-4adc-a897-4574abca4ed5\',
      \'revision_timestamp\' => \'1418227133\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Upto 50% off on select catalogue. No coupon code required. Choose from over 10,000 products like shoes, bags, t-shirts etc. listed on the landing page.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Upto 50% off on select catalogue. No coupon code required. Choose from over 10,000 products like shoes, bags, t-shirts etc. listed on the landing page.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'flip55\',
            \'format\' => NULL,
            \'safe_value\' => \'flip55\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-14 15:50:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-15 15:50:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1415980460\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'20\',
        \'source\' => \'node/4\',
        \'alias\' => \'flipkart-coupon/upto-50-off-select-catalogue\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'10\',
      \'uid\' => \'1\',
      \'title\' => \'Flat 20% off on Rs. 350 & Above\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3243e962-052f-4baf-a9c3-e1b6e688f8b1\',
      \'nid\' => \'10\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1416675630\',
      \'changed\' => \'1418227133\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b25e3484-a165-4eeb-924d-edbe64dc7344\',
      \'revision_timestamp\' => \'1418227133\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Get a flat 20% discount on a minimum order of Rs. 350. This code is not valid on Simply Veg, Simply Non-Veg Pizzas, Regular Pizzas and Combos & Beverages. Valid for online order only.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Get a flat 20% discount on a minimum order of Rs. 350. This code is not valid on Simply Veg, Simply Non-Veg Pizzas, Regular Pizzas and Combos &amp; Beverages. Valid for online order only.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Flate20\',
            \'format\' => NULL,
            \'safe_value\' => \'Flate20\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.dominos.co.in/\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.dominos.co.in/\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-22 17:00:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-24 17:00:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1416675630\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'31\',
        \'source\' => \'node/10\',
        \'alias\' => \'dominos-coupon/flat-20-off-rs-350-above\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'28\',
      \'uid\' => \'1\',
      \'title\' => \'Free Amazon Gift Card worth Rs. 2500 on Rs. 10,000 (Large Appliances)\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'dfb740b9-7348-4042-86b0-6bf106587639\',
      \'nid\' => \'28\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418227793\',
      \'changed\' => \'1418227793\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c3af3b91-2f50-4bb7-a2fc-a10a846b2e49\',
      \'revision_timestamp\' => \'1418227793\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Free gift card worth Rs. 2500 on large appliances on a minimum order of Rs. 10,000. No coupon code required. \',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Free gift card worth Rs. 2500 on large appliances on a minimum order of Rs. 10,000. No coupon code required.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.amazon.in/b/ref=s9_acss_bw_hsb_HK0812_s1_n?_encoding=UTF8&node=1380263031&tag=coupo07-21&ascsubtag=p%3AD9nhS6Xieq6N\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.amazon.in/b/ref=s9_acss_bw_hsb_HK0812_s1_n?_encoding=UTF8&amp;node=1380263031&amp;tag=coupo07-21&amp;ascsubtag=p%3AD9nhS6Xieq6N\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 16:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-31 16:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'6\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418227793\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'51\',
        \'source\' => \'node/28\',
        \'alias\' => \'amazon-coupon/free-amazon-gift-card-worth-rs-2500-rs-10000-large-appliances\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'34\',
      \'uid\' => \'1\',
      \'title\' => \'Upto 80% + Extra 30% Off on Select Catalogue\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'7e977935-6d76-49a7-a3a5-91f3426280c4\',
      \'nid\' => \'34\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418228377\',
      \'changed\' => \'1418228377\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c43cb65b-35cb-42ae-b34b-17a76a41b854\',
      \'revision_timestamp\' => \'1418228377\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Upto 80% off + extra 30% off select fashion products for men and women. Get free recharge vouchers worth Rs. 100 on purchase of Rs. 500 and above.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Upto 80% off + extra 30% off select fashion products for men and women. Get free recharge vouchers worth Rs. 100 on purchase of Rs. 500 and above.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'GOSF30\',
            \'format\' => NULL,
            \'safe_value\' => \'GOSF30\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.jabong.com\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.jabong.com\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 16:20:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-12 16:20:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418228377\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'57\',
        \'source\' => \'node/34\',
        \'alias\' => \'jabong-coupon/upto-80-extra-30-off-select-catalogue\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'14\',
      \'uid\' => \'1\',
      \'title\' => \'Fflat 20% discount on a minimum order of Rs. 350\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'de2ee7eb-0567-4de0-85f7-6025f09c0ea7\',
      \'nid\' => \'14\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1416676418\',
      \'changed\' => \'1418227133\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c6656b2d-a7aa-4f4d-abb3-84954a6774fb\',
      \'revision_timestamp\' => \'1418227133\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Fflat 20% discount on a minimum order of Rs. 350Fflat 20% discount on a minimum order of Rs. 350\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Fflat 20% discount on a minimum order of Rs. 350Fflat 20% discount on a minimum order of Rs. 350</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'FLP82\',
            \'format\' => NULL,
            \'safe_value\' => \'FLP82\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://localhost/c75\',
            \'format\' => NULL,
            \'safe_value\' => \'http://localhost/c75\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-22 17:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-24 17:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1416676418\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'35\',
        \'source\' => \'node/14\',
        \'alias\' => \'ebay-coupon/fflat-20-discount-minimum-order-rs-350\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'22\',
      \'uid\' => \'1\',
      \'title\' => \'Flat 10% Off on Domain Name Registration\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'213bdce3-018a-4b59-9ccd-7fb501518323\',
      \'nid\' => \'22\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418226741\',
      \'changed\' => \'1418226741\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d23e6201-f9a0-4d74-a9f4-6f9217ba892f\',
      \'revision_timestamp\' => \'1418226741\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Flat 10% off on domain name registration. Offer valid till 31st December.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Flat 10% off on domain name registration. Offer valid till 31st December.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'AFFDEC\',
            \'format\' => NULL,
            \'safe_value\' => \'AFFDEC\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.bigrock.in/?a_aid=5485e13251c2e\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.bigrock.in/?a_aid=5485e13251c2e\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 15:50:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-01-01 15:50:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'7\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418226741\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'45\',
        \'source\' => \'node/22\',
        \'alias\' => \'bigrock-coupon/flat-10-off-domain-name-registration\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'31\',
      \'uid\' => \'1\',
      \'title\' => \'Upto 40% Off on Pressure Cookers\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'2ddc595e-8665-4f22-92d9-12220d9be070\',
      \'nid\' => \'31\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418228062\',
      \'changed\' => \'1418228062\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'dbb759ef-f476-4c3e-960e-dd4d562d5b1d\',
      \'revision_timestamp\' => \'1418228062\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Upto 40% off on pressure cookers. No coupon code required.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Upto 40% off on pressure cookers. No coupon code required.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.flipkart.com/household/cookware/pressure-cookers-pans/pressure-cookers/pr?sid=r4l%2Cc7t%2Cu3r%2Cvvm&affid=contact&affExtParam1=p%3Ax02EeLTiaP13\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.flipkart.com/household/cookware/pressure-cookers-pans/pressure-cookers/pr?sid=r4l%2Cc7t%2Cu3r%2Cvvm&amp;affid=contact&amp;affExtParam1=p%3Ax02EeLTiaP13\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 16:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-31 16:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Deal\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418228062\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'54\',
        \'source\' => \'node/31\',
        \'alias\' => \'flipkart-coupon/upto-40-off-pressure-cookers\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'33\',
      \'uid\' => \'1\',
      \'title\' => \'Minimum 50% Off on Bags, Wallets and Belts\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'97561a7b-1048-4bef-b1dd-34efa2491f84\',
      \'nid\' => \'33\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418228193\',
      \'changed\' => \'1418228193\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e653fd9d-e76a-430b-b53a-903e53708cc9\',
      \'revision_timestamp\' => \'1418228193\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Get a minimum 50% off on bags, wallets and belts. No coupon code required.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Get a minimum 50% off on bags, wallets and belts. No coupon code required.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.flipkart.com/bags-wallets-belts/pr?sid=reh&offer=b%3Amp%3Ac%3A1090ce0f04.&ref=a60b77a6-8e2c-45ba-8dbf-8e220ef03b57&affid=contact&affExtParam1=p%3Ay6ItHwJupafb\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.flipkart.com/bags-wallets-belts/pr?sid=reh&amp;offer=b%3Amp%3Ac%3A1090ce0f04.&amp;ref=a60b77a6-8e2c-45ba-8dbf-8e220ef03b57&amp;affid=contact&amp;affExtParam1=p%3Ay6ItHwJupafb\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 16:20:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-31 16:20:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Deal\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418228193\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'56\',
        \'source\' => \'node/33\',
        \'alias\' => \'flipkart-coupon/minimum-50-off-bags-wallets-and-belts\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'15\',
      \'uid\' => \'1\',
      \'title\' => \'Demo Demo Demo \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'19d162c3-18d9-44b1-baa4-3789a2e31a78\',
      \'nid\' => \'15\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1416677099\',
      \'changed\' => \'1418227133\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'eb02c4e7-0c16-47b3-acca-e8acba1d0fcf\',
      \'revision_timestamp\' => \'1418227133\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Demo Demo Demo Demo Demo Demo Demo Demo Demo \',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Demo Demo Demo Demo Demo Demo Demo Demo Demo</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Demo\',
            \'format\' => NULL,
            \'safe_value\' => \'Demo\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http:ww.google.com\',
            \'format\' => NULL,
            \'safe_value\' => \'http:ww.google.com\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-22 17:20:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-30 17:20:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1416677099\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'36\',
        \'source\' => \'node/15\',
        \'alias\' => \'flipkart-coupon/demo-demo-demo\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'27\',
      \'uid\' => \'1\',
      \'title\' => \'GOSF: Upto 50% Off on Watches\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a6ca1786-b794-4289-8b59-ade0f7975a24\',
      \'nid\' => \'27\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418227714\',
      \'changed\' => \'1418227714\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ebcd3f4b-bf0b-412e-8f8d-f9fb39f4778c\',
      \'revision_timestamp\' => \'1418227714\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Get upto 50% off on watches from various brands.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Get upto 50% off on watches from various brands.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.amazon.in/gp/feature.html?ie=UTF8&docId=1000842383&tag=coupo07-21&ascsubtag=p%3ACIDmISD4WXZe\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.amazon.in/gp/feature.html?ie=UTF8&amp;docId=1000842383&amp;tag=coupo07-21&amp;ascsubtag=p%3ACIDmISD4WXZe\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 16:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-31 16:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Deal\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'6\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418227714\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'50\',
        \'source\' => \'node/27\',
        \'alias\' => \'amazon-coupon/gosf-upto-50-off-watches\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'11\',
      \'uid\' => \'1\',
      \'title\' => \'Upto 50% off on apps\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'63ca5998-bcf5-4733-a399-7e067077bd13\',
      \'nid\' => \'11\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1416675700\',
      \'changed\' => \'1418227133\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ebd13ee7-2ea8-4579-8e5e-47c82744ba36\',
      \'revision_timestamp\' => \'1418227133\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Get a flat 20% discount on a minimum order of Rs. 350. This code is not valid on Simply Veg, Simply Non-Veg Pizzas, Regular Pizzas and Combos & Beverages. Valid for online order only.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Get a flat 20% discount on a minimum order of Rs. 350. This code is not valid on Simply Veg, Simply Non-Veg Pizzas, Regular Pizzas and Combos &amp; Beverages. Valid for online order only.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'FLP80\',
            \'format\' => NULL,
            \'safe_value\' => \'FLP80\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.dominos.co.in/\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.dominos.co.in/\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-22 17:00:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-22 17:00:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1416675700\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'32\',
        \'source\' => \'node/11\',
        \'alias\' => \'dominos-coupon/upto-50-off-apps\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'5\',
      \'uid\' => \'1\',
      \'title\' => \'Upto 55% Off on Ethnic Wear for Women\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'986a7f5a-4e4a-4f39-b91c-b601519088f1\',
      \'nid\' => \'5\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1415980530\',
      \'changed\' => \'1418227133\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f2d17572-9614-4ad7-b4a9-7ca2912a06ff\',
      \'revision_timestamp\' => \'1418227133\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Upto 55% off on ethnic wear for women. No coupon code required. Offer valid on sarees, salwars, kurtas and kurtis listed on the landing page.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Upto 55% off on ethnic wear for women. No coupon code required. Offer valid on sarees, salwars, kurtas and kurtis listed on the landing page.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'SHOP20\',
            \'format\' => NULL,
            \'safe_value\' => \'SHOP20\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.myntra.com/shopping-offer16?utm_source=aff&utm_medium=aff-rajeshsaini\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.myntra.com/shopping-offer16?utm_source=aff&amp;utm_medium=aff-rajeshsaini\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-14 15:50:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-22 15:50:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1415980530\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'21\',
        \'source\' => \'node/5\',
        \'alias\' => \'flipkart-coupon/upto-55-off-ethnic-wear-women\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'17\',
      \'uid\' => \'1\',
      \'title\' => \'Upto 40% off on Speakers, Headphones and More\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'00c1483c-3429-4f5c-b191-4ce63784309b\',
      \'nid\' => \'17\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1417331870\',
      \'changed\' => \'1417331870\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f435c59d-7fbe-4774-bcfe-23b500bff350\',
      \'revision_timestamp\' => \'1417331870\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Audio & video: Upto 40% off on speakers, headphones and more from top brands such as Sony, Philips, Apple and JBL. No coupon code required.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Audio &amp; video: Upto 40% off on speakers, headphones and more from top brands such as Sony, Philips, Apple and JBL. No coupon code required.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'amozo70\',
            \'format\' => NULL,
            \'safe_value\' => \'amozo70\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.amazon.in\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.amazon.in\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-30 07:20:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 07:20:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Deal\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'6\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1417331870\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'39\',
        \'source\' => \'node/17\',
        \'alias\' => \'amazon-coupon/upto-40-off-speakers-headphones-and-more\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'6\',
      \'uid\' => \'1\',
      \'title\' => \'Upto 80% off on Select Catalogue\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'95ddfff5-2bdb-4a57-b947-6e5f25a00e73\',
      \'nid\' => \'6\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1415981977\',
      \'changed\' => \'1418227133\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f55fccf1-277c-4a6c-a1b1-e47b52b87b3d\',
      \'revision_timestamp\' => \'1418227133\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Upto 80% off on Select CatalogueUpto 80% off on Select CatalogueUpto 80% off on Select CatalogueUpto 80% off on Select Catalogue\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Upto 80% off on Select CatalogueUpto 80% off on Select CatalogueUpto 80% off on Select CatalogueUpto 80% off on Select Catalogue</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'FLP80\',
            \'format\' => NULL,
            \'safe_value\' => \'FLP80\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'rajeshsaini.com\',
            \'format\' => NULL,
            \'safe_value\' => \'rajeshsaini.com\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-05 16:20:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-14 16:20:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1415981977\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'22\',
        \'source\' => \'node/6\',
        \'alias\' => \'flipkart-coupon/upto-80-off-select-catalogue\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'80 discount on footwere\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'2c62ab31-53ee-4408-8f3f-4698efe4593d\',
      \'nid\' => \'2\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1415902563\',
      \'changed\' => \'1418227133\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f7366b8e-aa7e-411f-804f-63370c23c31c\',
      \'revision_timestamp\' => \'1418227133\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'80 discount on footwere\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>80 discount on footwere</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'FLP80\',
            \'format\' => NULL,
            \'safe_value\' => \'FLP80\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'flipkart.com\',
            \'format\' => NULL,
            \'safe_value\' => \'flipkart.com\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-14 18:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-23 18:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1415902563\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'18\',
        \'source\' => \'node/2\',
        \'alias\' => \'flipkart-coupon/80-discount-footwere\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'26\',
      \'uid\' => \'1\',
      \'title\' => \'GOSF: Best selling books for Rs. 299\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'684652f3-90ba-4156-b70b-3ede1bdd8998\',
      \'nid\' => \'26\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418227591\',
      \'changed\' => \'1418227591\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f8582e18-e054-44bf-83c1-44182f11fdd6\',
      \'revision_timestamp\' => \'1418227591\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Get best selling books for Rs. 299. No coupon code required.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Get best selling books for Rs. 299. No coupon code required.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.amazon.in/gp/product/B00JG8FHJQ/ref=famstripe_kp?tag=coupo07-21&ascsubtag=p%3AONHlKQOLcVYs\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.amazon.in/gp/product/B00JG8FHJQ/ref=famstripe_kp?tag=coupo07-21&amp;ascsubtag=p%3AONHlKQOLcVYs\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 16:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-12 16:10:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Deal\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'6\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418227591\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'49\',
        \'source\' => \'node/26\',
        \'alias\' => \'amazon-coupon/gosf-best-selling-books-rs-299\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'21\',
      \'uid\' => \'1\',
      \'title\' => \'Flat 7.5% Off For Standard Chartered Bank Customers\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'549fcc35-c8a3-4281-a287-6fed56cd493e\',
      \'nid\' => \'21\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418226304\',
      \'changed\' => \'1418226304\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f987e824-b7ed-4b9c-9181-25573ca7abb6\',
      \'revision_timestamp\' => \'1418226304\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Flat 7.5% off for Standard Chartered bank customers. Offer valid on payment made with Standard Chartered bank debit card, credit card or net banking. Maximum discount of Rs. 750 per transaction. Offer valid till 31st December.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Flat 7.5% off for Standard Chartered bank customers. Offer valid on payment made with Standard Chartered bank debit card, credit card or net banking. Maximum discount of Rs. 750 per transaction. Offer valid till 31st December.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'SCBFESTIV2\',
            \'format\' => NULL,
            \'safe_value\' => \'SCBFESTIV2\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.ebay.in\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.ebay.in\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 15:40:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-01-01 15:40:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418226304\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'43\',
        \'source\' => \'node/21\',
        \'alias\' => \'ebay-coupon/flat-75-off-standard-chartered-bank-customers\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'19\',
      \'uid\' => \'1\',
      \'title\' => \'Flat 8% Off For SBI Credit Card Users\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'21b786ae-3ef1-4bdf-9251-20af910f9e8d\',
      \'nid\' => \'19\',
      \'type\' => \'add_coupon\',
      \'language\' => \'und\',
      \'created\' => \'1418226022\',
      \'changed\' => \'1418226022\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'fb154994-3551-4735-b728-caddcab57cbd\',
      \'revision_timestamp\' => \'1418226022\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Flat 8% off on all orders for payment made with SBi credit card. Maximum discount of Rs. 800 per transaction. Offer valid till 31st December.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Flat 8% off on all orders for payment made with SBi credit card. Maximum discount of Rs. 800 per transaction. Offer valid till 31st December.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_coupon_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'SBIFESTCC2\',
            \'format\' => NULL,
            \'safe_value\' => \'SBIFESTCC2\',
          ),
        ),
      ),
      \'field_coupon_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.ebay.in/\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.ebay.in/\',
          ),
        ),
      ),
      \'field_coupon_start_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-10 15:40:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_end_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-01-01 15:40:00\',
            \'timezone\' => \'Asia/Kolkata\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_coupon_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coupon\',
          ),
        ),
      ),
      \'field_is_active\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_store\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1418226022\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'41\',
        \'source\' => \'node/19\',
        \'alias\' => \'ebay-coupon/flat-8-off-sbi-credit-card-users\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
