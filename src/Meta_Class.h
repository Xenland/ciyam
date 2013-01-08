// Copyright (c) 2008-2013 CIYAM Open Developers
//
// Distributed under the MIT/X11 software license, please refer to the file license.txt
// in the root project directory or http://www.opensource.org/licenses/mit-license.php.

#ifndef META_CLASS_H
#  define META_CLASS_H

#  ifndef HAS_PRECOMPILED_STD_HEADERS
#     include <string>
#  endif

#  include "class_base.h"

#  ifdef MODULE_META_IMPL
#     define META_CLASS_DECL_SPEC DYNAMIC_EXPORT
#  else
#     define META_CLASS_DECL_SPEC DYNAMIC_IMPORT
#  endif

class Meta_Relationship;
class Meta_List_Field;
class Meta_Specification;
class Meta_Specification_Field_Action;
class Meta_List;
class Meta_View_Field;
class Meta_Index;
class Meta_Initial_Record;
class Meta_Modifier_Affect;
class Meta_Modifier;
class Meta_Procedure;
class Meta_View;
class Meta_Model;
class Meta_Field;
class Meta_Class;

class META_CLASS_DECL_SPEC Meta_Class : public class_base
{
   friend class Meta_Relationship;
   friend class Meta_List_Field;
   friend class Meta_Specification;
   friend class Meta_Specification_Field_Action;
   friend class Meta_List;
   friend class Meta_View_Field;
   friend class Meta_Index;
   friend class Meta_Initial_Record;
   friend class Meta_Modifier_Affect;
   friend class Meta_Modifier;
   friend class Meta_Procedure;
   friend class Meta_View;
   friend class Meta_Model;
   friend class Meta_Field;

   public:
   typedef Meta_Class class_type;

   enum field_id
   {
      e_field_id_none = 0,
      e_field_id_Commands_File = 1,
      e_field_id_Delay_Initial_Records = 2,
      e_field_id_Extra = 3,
      e_field_id_Header_File = 4,
      e_field_id_Id = 5,
      e_field_id_Model = 6,
      e_field_id_Name = 7,
      e_field_id_Next_Field_Id = 8,
      e_field_id_Next_Procedure_Id = 9,
      e_field_id_Plural = 10,
      e_field_id_Quick_Link_Field = 11,
      e_field_id_Source_Class = 12,
      e_field_id_Source_File = 13,
      e_field_id_Source_Model = 14,
      e_field_id_Static_Instance_Key = 15,
      e_field_id_Type = 16
   };

   Meta_Class( );
   ~Meta_Class( );

   const std::string& Commands_File( ) const;
   void Commands_File( const std::string& Commands_File );

   bool Delay_Initial_Records( ) const;
   void Delay_Initial_Records( bool Delay_Initial_Records );

   int Extra( ) const;
   void Extra( int Extra );

   const std::string& Header_File( ) const;
   void Header_File( const std::string& Header_File );

   const std::string& Id( ) const;
   void Id( const std::string& Id );

   const std::string& Name( ) const;
   void Name( const std::string& Name );

   const std::string& Next_Field_Id( ) const;
   void Next_Field_Id( const std::string& Next_Field_Id );

   const std::string& Next_Procedure_Id( ) const;
   void Next_Procedure_Id( const std::string& Next_Procedure_Id );

   const std::string& Plural( ) const;
   void Plural( const std::string& Plural );

   const std::string& Source_File( ) const;
   void Source_File( const std::string& Source_File );

   const std::string& Static_Instance_Key( ) const;
   void Static_Instance_Key( const std::string& Static_Instance_Key );

   int Type( ) const;
   void Type( int Type );

   Meta_Model& Model( );
   const Meta_Model& Model( ) const;
   void Model( const std::string& key );

   Meta_Field& Quick_Link_Field( );
   const Meta_Field& Quick_Link_Field( ) const;
   void Quick_Link_Field( const std::string& key );

   Meta_Class& Source_Class( );
   const Meta_Class& Source_Class( ) const;
   void Source_Class( const std::string& key );

   Meta_Model& Source_Model( );
   const Meta_Model& Source_Model( ) const;
   void Source_Model( const std::string& key );

   Meta_Relationship& child_Relationship_Child( );
   const Meta_Relationship& child_Relationship_Child( ) const;

   Meta_List_Field& child_List_Field_Child_Rel_Child( );
   const Meta_List_Field& child_List_Field_Child_Rel_Child( ) const;

   Meta_Specification& child_Specification_Child_Rel_Child( );
   const Meta_Specification& child_Specification_Child_Rel_Child( ) const;

   Meta_List_Field& child_List_Field_Child_Rel_Source_Parent( );
   const Meta_List_Field& child_List_Field_Child_Rel_Source_Parent( ) const;

   Meta_Specification& child_Specification_Field( );
   const Meta_Specification& child_Specification_Field( ) const;

   Meta_Specification_Field_Action& child_Specification_Field_Action_New_Record( );
   const Meta_Specification_Field_Action& child_Specification_Field_Action_New_Record( ) const;

   Meta_Specification& child_Specification_Other( );
   const Meta_Specification& child_Specification_Other( ) const;

   Meta_Field& child_Field_Parent( );
   const Meta_Field& child_Field_Parent( ) const;

   Meta_List_Field& child_List_Field_Parent( );
   const Meta_List_Field& child_List_Field_Parent( ) const;

   Meta_List& child_List_Parent( );
   const Meta_List& child_List_Parent( ) const;

   Meta_Relationship& child_Relationship_Parent( );
   const Meta_Relationship& child_Relationship_Parent( ) const;

   Meta_List_Field& child_List_Field_Source_Child( );
   const Meta_List_Field& child_List_Field_Source_Child( ) const;

   Meta_Specification& child_Specification_Source_Child( );
   const Meta_Specification& child_Specification_Source_Child( ) const;

   Meta_Specification& child_Specification_Source( );
   const Meta_Specification& child_Specification_Source( ) const;

   Meta_Specification& child_Specification_Source_Field( );
   const Meta_Specification& child_Specification_Source_Field( ) const;

   Meta_List_Field& child_List_Field_Source_Parent( );
   const Meta_List_Field& child_List_Field_Source_Parent( ) const;

   Meta_Specification& child_Specification_Source_Parent( );
   const Meta_Specification& child_Specification_Source_Parent( ) const;

   Meta_View_Field& child_View_Field_Source_Parent( );
   const Meta_View_Field& child_View_Field_Source_Parent( ) const;

   Meta_Class& child_Class_Source( );
   const Meta_Class& child_Class_Source( ) const;

   Meta_Specification& child_Specification_Test_Field( );
   const Meta_Specification& child_Specification_Test_Field( ) const;

   Meta_Specification& child_Specification_Test_Parent( );
   const Meta_Specification& child_Specification_Test_Parent( ) const;

   Meta_Field& child_Field( );
   const Meta_Field& child_Field( ) const;

   Meta_Index& child_Index( );
   const Meta_Index& child_Index( ) const;

   Meta_Initial_Record& child_Initial_Record( );
   const Meta_Initial_Record& child_Initial_Record( ) const;

   Meta_List_Field& child_List_Field( );
   const Meta_List_Field& child_List_Field( ) const;

   Meta_List& child_List( );
   const Meta_List& child_List( ) const;

   Meta_Modifier_Affect& child_Modifier_Affect( );
   const Meta_Modifier_Affect& child_Modifier_Affect( ) const;

   Meta_Modifier& child_Modifier( );
   const Meta_Modifier& child_Modifier( ) const;

   Meta_Procedure& child_Procedure( );
   const Meta_Procedure& child_Procedure( ) const;

   Meta_Specification& child_Specification( );
   const Meta_Specification& child_Specification( ) const;

   Meta_View_Field& child_View_Field( );
   const Meta_View_Field& child_View_Field( ) const;

   Meta_View& child_View( );
   const Meta_View& child_View( ) const;

   virtual void Generate( );

   std::string get_field_value( int field ) const;
   void set_field_value( int field, const std::string& value );

   bool has_field_changed( const std::string& field ) const;

   bool is_field_transient( int field ) const;
   bool is_field_transient( field_id id ) const { return static_is_field_transient( id ); }

   std::string get_field_name( int field ) const;

   int get_field_num( const std::string& field ) const;

   uint64_t get_state( ) const;

   const std::string& execute( const std::string& cmd_and_args );

   void clear( );

   void validate( unsigned state, bool is_internal );
   void validate_set_fields( std::set< std::string >& fields_set );

   void after_fetch( );
   void finalise_fetch( );

   void at_create( );
   void post_init( );

   void to_store( bool is_create, bool is_internal );
   void for_store( bool is_create, bool is_internal );
   void after_store( bool is_create, bool is_internal );

   bool can_destroy( bool is_internal );
   void for_destroy( bool is_internal );
   void after_destroy( bool is_internal );

   void set_default_values( );

   bool is_filtered( ) const;

   std::string get_class_id( ) const;
   std::string get_class_name( ) const;
   std::string get_plural_name( ) const;

   std::string get_module_id( ) const;
   std::string get_module_name( ) const;

   std::string get_resolved_module_id( ) const { return static_resolved_module_id( ); }
   std::string get_resolved_module_name( ) const { return static_resolved_module_name( ); }

   std::string get_lock_class_id( ) const { return static_lock_class_id( ); }
   std::string get_check_class_name( ) const { return static_check_class_name( ); }

   std::string get_display_name( bool plural = false ) const;

   bool get_is_alias( ) const;
   void get_alias_base_info( std::pair< std::string, std::string >& alias_base_info ) const;

   void get_base_class_info( std::vector< std::pair< std::string, std::string > >& base_class_info ) const;

   class_base& get_or_create_graph_child( const std::string& context );

   void clear_foreign_key( const std::string& field );
   void set_foreign_key_value( const std::string& field, const std::string& value );

   const std::string& get_foreign_key_value( const std::string& field );

   void get_class_info( class_info_container& class_info ) const { static_get_class_info( class_info ); }
   void get_field_info( field_info_container& field_info ) const { return static_get_field_info( field_info ); }
   void get_foreign_key_info( foreign_key_info_container& foreign_key_info ) const { static_get_foreign_key_info( foreign_key_info ); }

   int get_num_fields( bool* p_done = 0, const std::string* p_class_name = 0 ) const { return static_get_num_fields( p_done, p_class_name ); }

   std::string& get_order_field_name( ) const;

   bool is_file_field_name( const std::string& name ) const;
   void get_file_field_names( std::vector< std::string >& file_field_names ) const;

   std::string get_field_uom_symbol( const std::string& id_or_name ) const;
   std::string get_field_display_name( const std::string& id_or_name ) const;

   const procedure_info_container& get_procedure_info( ) const { return static_get_procedure_info( ); }

   void get_text_search_fields( std::vector< std::string >& fields ) const { return static_get_text_search_fields( fields ); }

   void get_all_enum_pairs( std::vector< std::pair< std::string, std::string > >& pairs ) const { return static_get_all_enum_pairs( pairs ); }

   std::string get_sql_columns( ) const { return static_get_sql_columns( ); }

   void get_sql_indexes( std::vector< std::string >& indexes ) const { static_get_sql_indexes( indexes ); }
   void get_sql_unique_indexes( std::vector< std::string >& indexes ) const { static_get_sql_unique_indexes( indexes ); }

   void get_sql_column_names( std::vector< std::string >& names, bool* p_done, const std::string* p_class_name ) const;
   void get_sql_column_values( std::vector< std::string >& values, bool* p_done, const std::string* p_class_name ) const;

   void get_required_field_names( std::set< std::string >& names,
    bool use_transients, std::set< std::string >* p_dependents = 0 ) const;

   void get_always_required_field_names( std::set< std::string >& names,
    bool use_transients, std::set< std::string >& dependents ) const;

   void get_transient_replacement_field_names( const std::string& name, std::vector< std::string >& names ) const;

   void do_generate_sql( generate_sql_type type,
    std::vector< std::string >& sql_stmts, std::set< std::string >& tx_key_info ) const;

   static void static_class_init( const char* p_module_name );
   static void static_class_term( const char* p_module_name );

   static const char* static_class_id( ) { return "106100"; }
   static const char* static_class_name( ) { return "Class"; }
   static const char* static_plural_name( ) { return "Classes"; }

   static const char* static_module_id( ) { return "100"; }
   static const char* static_module_name( ) { return "Meta"; }

   static const char* static_resolved_module_id( );
   static const char* static_resolved_module_name( );

   static const char* static_lock_class_id( );
   static const char* static_check_class_name( );

   static bool static_has_derivations( );

   static void static_get_class_info( class_info_container& class_info );
   static void static_get_field_info( field_info_container& all_field_info );
   static void static_get_foreign_key_info( foreign_key_info_container& foreign_key_info );

   static int static_get_num_fields( bool* p_done = 0, const std::string* p_class_name = 0 );

   static bool static_is_field_transient( field_id id );

   static const char* static_get_field_id( field_id id );
   static const char* static_get_field_name( field_id id );

   static int static_get_field_num( const std::string& field );

   static procedure_info_container& static_get_procedure_info( );

   static void static_get_all_enum_pairs( std::vector< std::pair< std::string, std::string > >& pairs );

   static void static_get_text_search_fields( std::vector< std::string >& fields );

   static std::string static_get_sql_columns( );

   static void static_get_sql_indexes( std::vector< std::string >& indexes );
   static void static_get_sql_unique_indexes( std::vector< std::string >& indexes );

   static void static_insert_derivation( const std::string& module_and_class_id );
   static void static_remove_derivation( const std::string& module_and_class_id );

   static void static_insert_external_alias( const std::string& module_and_class_id, Meta_Class* p_instance );
   static void static_remove_external_alias( const std::string& module_and_class_id );

   private:
   Meta_Class( const Meta_Class& );
   Meta_Class& operator =( const Meta_Class& );

   struct impl;
   friend struct impl;

   impl* p_impl;

   protected:
   const char* get_field_id( const std::string& name, bool* p_sql_numeric = 0, std::string* p_type_name = 0 ) const;
   const char* get_field_name( const std::string& id, bool* p_sql_numeric = 0, std::string* p_type_name = 0 ) const;

   void get_foreign_key_values( foreign_key_data_container& foreign_key_values ) const;

   virtual void setup_foreign_key( Meta_Model& o, const std::string& value );
   virtual void setup_foreign_key( Meta_Field& o, const std::string& value );
   virtual void setup_foreign_key( Meta_Class& o, const std::string& value );

   virtual void setup_graph_parent( Meta_Relationship& o, const std::string& foreign_key_field );
   virtual void setup_graph_parent( Meta_List_Field& o, const std::string& foreign_key_field );
   virtual void setup_graph_parent( Meta_Specification& o, const std::string& foreign_key_field );
   virtual void setup_graph_parent( Meta_Specification_Field_Action& o, const std::string& foreign_key_field );
   virtual void setup_graph_parent( Meta_Field& o, const std::string& foreign_key_field );
   virtual void setup_graph_parent( Meta_List& o, const std::string& foreign_key_field );
   virtual void setup_graph_parent( Meta_View_Field& o, const std::string& foreign_key_field );
   virtual void setup_graph_parent( Meta_Class& o, const std::string& foreign_key_field );
   virtual void setup_graph_parent( Meta_Index& o, const std::string& foreign_key_field );
   virtual void setup_graph_parent( Meta_Initial_Record& o, const std::string& foreign_key_field );
   virtual void setup_graph_parent( Meta_Modifier_Affect& o, const std::string& foreign_key_field );
   virtual void setup_graph_parent( Meta_Modifier& o, const std::string& foreign_key_field );
   virtual void setup_graph_parent( Meta_Procedure& o, const std::string& foreign_key_field );
   virtual void setup_graph_parent( Meta_View& o, const std::string& foreign_key_field );

   virtual void setup_graph_parent( Meta_Model& o,
    const std::string& foreign_key_field, const std::string& init_value );

   virtual void setup_graph_parent( Meta_Field& o,
    const std::string& foreign_key_field, const std::string& init_value );

   virtual void setup_graph_parent( Meta_Class& o,
    const std::string& foreign_key_field, const std::string& init_value );

   size_t get_total_child_relationships( ) const;
   void set_total_child_relationships( size_t new_total_child_relationships ) const;

   size_t get_num_foreign_key_children( bool is_internal = false ) const;

   class_base* get_next_foreign_key_child( size_t child_num,
    std::string& next_child_field, cascade_op op, bool is_internal = false );

   void add_extra_fixed_info( std::vector< std::pair< std::string, std::string > >& fixed_info ) const;
   void add_extra_paging_info( std::vector< std::pair< std::string, std::string > >& paging_info ) const;
};

inline std::string to_string( const Meta_Class& c ) { return c.get_key( ); }

inline bool is_null( const Meta_Class& c ) { return c.get_key( ).empty( ); }

inline bool check_equal( const Meta_Class& c, const char* p ) { return c.get_key( ) == p; }
inline bool check_not_equal( const Meta_Class& c, const char* p ) { return !( c.get_key( ) == p ); }

#endif

