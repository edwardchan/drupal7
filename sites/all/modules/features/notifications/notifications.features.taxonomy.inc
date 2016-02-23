<?php
/**
 * @file
 * notifications.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function notifications_taxonomy_default_vocabularies() {
  return array(
    'notification_type' => array(
      'name' => 'Notification Type',
      'machine_name' => 'notification_type',
      'description' => 'The types of notifications',
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
