<?php
/**
 * @file
 * responsive_photo_gallery.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function responsive_photo_gallery_taxonomy_default_vocabularies() {
  return array(
    'photo_album_category' => array(
      'name' => 'Photo Album Category',
      'machine_name' => 'photo_album_category',
      'description' => 'Helps group photo albums by subject',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
