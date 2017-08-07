#ifndef _CISCO_DYNAMIC_TEMPLATE_MIB_
#define _CISCO_DYNAMIC_TEMPLATE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_DYNAMIC_TEMPLATE_MIB {

class CiscoDynamicTemplateMib : public ydk::Entity
{
    public:
        CiscoDynamicTemplateMib();
        ~CiscoDynamicTemplateMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Cdttemplatetable; //type: CiscoDynamicTemplateMib::Cdttemplatetable
        class Cdttemplatetargettable; //type: CiscoDynamicTemplateMib::Cdttemplatetargettable
        class Cdttemplateassociationtable; //type: CiscoDynamicTemplateMib::Cdttemplateassociationtable
        class Cdttemplateusagetable; //type: CiscoDynamicTemplateMib::Cdttemplateusagetable
        class Cdttemplatecommontable; //type: CiscoDynamicTemplateMib::Cdttemplatecommontable
        class Cdtiftemplatetable; //type: CiscoDynamicTemplateMib::Cdtiftemplatetable
        class Cdtppptemplatetable; //type: CiscoDynamicTemplateMib::Cdtppptemplatetable
        class Cdtppppeeripaddrpooltable; //type: CiscoDynamicTemplateMib::Cdtppppeeripaddrpooltable
        class Cdtethernettemplatetable; //type: CiscoDynamicTemplateMib::Cdtethernettemplatetable
        class Cdtsrvtemplatetable; //type: CiscoDynamicTemplateMib::Cdtsrvtemplatetable

        std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdtethernettemplatetable> cdtethernettemplatetable;
        std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdtiftemplatetable> cdtiftemplatetable;
        std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdtppppeeripaddrpooltable> cdtppppeeripaddrpooltable;
        std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdtppptemplatetable> cdtppptemplatetable;
        std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdtsrvtemplatetable> cdtsrvtemplatetable;
        std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplateassociationtable> cdttemplateassociationtable;
        std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatecommontable> cdttemplatecommontable;
        std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetable> cdttemplatetable;
        std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetargettable> cdttemplatetargettable;
        std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplateusagetable> cdttemplateusagetable;
        
}; // CiscoDynamicTemplateMib


class CiscoDynamicTemplateMib::Cdttemplatetable : public ydk::Entity
{
    public:
        Cdttemplatetable();
        ~Cdttemplatetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cdttemplateentry; //type: CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry

        std::vector<std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry> > cdttemplateentry;
        
}; // CiscoDynamicTemplateMib::Cdttemplatetable


class CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry : public ydk::Entity
{
    public:
        Cdttemplateentry();
        ~Cdttemplateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cdttemplatename; //type: binary
        ydk::YLeaf cdttemplatestatus; //type: Rowstatus
        ydk::YLeaf cdttemplatestorage; //type: Storagetype
        ydk::YLeaf cdttemplatetype; //type: Dynamictemplatetype
        ydk::YLeaf cdttemplatesrc; //type: Cdttemplatesrc
        ydk::YLeaf cdttemplateusagecount; //type: uint32
        class Cdttemplatesrc;

}; // CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry


class CiscoDynamicTemplateMib::Cdttemplatetargettable : public ydk::Entity
{
    public:
        Cdttemplatetargettable();
        ~Cdttemplatetargettable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cdttemplatetargetentry; //type: CiscoDynamicTemplateMib::Cdttemplatetargettable::Cdttemplatetargetentry

        std::vector<std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetargettable::Cdttemplatetargetentry> > cdttemplatetargetentry;
        
}; // CiscoDynamicTemplateMib::Cdttemplatetargettable


class CiscoDynamicTemplateMib::Cdttemplatetargettable::Cdttemplatetargetentry : public ydk::Entity
{
    public:
        Cdttemplatetargetentry();
        ~Cdttemplatetargetentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cdttemplatetargettype; //type: Dynamictemplatetargettype
        ydk::YLeaf cdttemplatetargetid; //type: binary
        ydk::YLeaf cdttemplatetargetstatus; //type: Rowstatus
        ydk::YLeaf cdttemplatetargetstorage; //type: Storagetype

}; // CiscoDynamicTemplateMib::Cdttemplatetargettable::Cdttemplatetargetentry


class CiscoDynamicTemplateMib::Cdttemplateassociationtable : public ydk::Entity
{
    public:
        Cdttemplateassociationtable();
        ~Cdttemplateassociationtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cdttemplateassociationentry; //type: CiscoDynamicTemplateMib::Cdttemplateassociationtable::Cdttemplateassociationentry

        std::vector<std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplateassociationtable::Cdttemplateassociationentry> > cdttemplateassociationentry;
        
}; // CiscoDynamicTemplateMib::Cdttemplateassociationtable


class CiscoDynamicTemplateMib::Cdttemplateassociationtable::Cdttemplateassociationentry : public ydk::Entity
{
    public:
        Cdttemplateassociationentry();
        ~Cdttemplateassociationentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cdttemplatetargettype; //type: Dynamictemplatetargettype
        //type: binary (refers to CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetargettable::Cdttemplatetargetentry::cdttemplatetargetid)
        ydk::YLeaf cdttemplatetargetid;
        ydk::YLeaf cdttemplateassociationname; //type: binary
        ydk::YLeaf cdttemplateassociationprecedence; //type: uint32

}; // CiscoDynamicTemplateMib::Cdttemplateassociationtable::Cdttemplateassociationentry


class CiscoDynamicTemplateMib::Cdttemplateusagetable : public ydk::Entity
{
    public:
        Cdttemplateusagetable();
        ~Cdttemplateusagetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cdttemplateusageentry; //type: CiscoDynamicTemplateMib::Cdttemplateusagetable::Cdttemplateusageentry

        std::vector<std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplateusagetable::Cdttemplateusageentry> > cdttemplateusageentry;
        
}; // CiscoDynamicTemplateMib::Cdttemplateusagetable


class CiscoDynamicTemplateMib::Cdttemplateusagetable::Cdttemplateusageentry : public ydk::Entity
{
    public:
        Cdttemplateusageentry();
        ~Cdttemplateusageentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: binary (refers to CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdttemplateusagetargettype; //type: Dynamictemplatetargettype
        ydk::YLeaf cdttemplateusagetargetid; //type: binary

}; // CiscoDynamicTemplateMib::Cdttemplateusagetable::Cdttemplateusageentry


class CiscoDynamicTemplateMib::Cdttemplatecommontable : public ydk::Entity
{
    public:
        Cdttemplatecommontable();
        ~Cdttemplatecommontable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cdttemplatecommonentry; //type: CiscoDynamicTemplateMib::Cdttemplatecommontable::Cdttemplatecommonentry

        std::vector<std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatecommontable::Cdttemplatecommonentry> > cdttemplatecommonentry;
        
}; // CiscoDynamicTemplateMib::Cdttemplatecommontable


class CiscoDynamicTemplateMib::Cdttemplatecommontable::Cdttemplatecommonentry : public ydk::Entity
{
    public:
        Cdttemplatecommonentry();
        ~Cdttemplatecommonentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: binary (refers to CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdtcommonvalid; //type: Cdtcommonvalid
        ydk::YLeaf cdtcommondescr; //type: string
        ydk::YLeaf cdtcommonkeepaliveint; //type: uint32
        ydk::YLeaf cdtcommonkeepaliveretries; //type: uint32
        ydk::YLeaf cdtcommonvrf; //type: binary
        ydk::YLeaf cdtcommonaddrpool; //type: string
        ydk::YLeaf cdtcommonipv4accessgroup; //type: string
        ydk::YLeaf cdtcommonipv4unreachables; //type: boolean
        ydk::YLeaf cdtcommonipv6accessgroup; //type: string
        ydk::YLeaf cdtcommonipv6unreachables; //type: boolean
        ydk::YLeaf cdtcommonsrvsubcontrol; //type: string
        ydk::YLeaf cdtcommonsrvredirect; //type: string
        ydk::YLeaf cdtcommonsrvacct; //type: string
        ydk::YLeaf cdtcommonsrvqos; //type: string
        ydk::YLeaf cdtcommonsrvnetflow; //type: string

}; // CiscoDynamicTemplateMib::Cdttemplatecommontable::Cdttemplatecommonentry


class CiscoDynamicTemplateMib::Cdtiftemplatetable : public ydk::Entity
{
    public:
        Cdtiftemplatetable();
        ~Cdtiftemplatetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cdtiftemplateentry; //type: CiscoDynamicTemplateMib::Cdtiftemplatetable::Cdtiftemplateentry

        std::vector<std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdtiftemplatetable::Cdtiftemplateentry> > cdtiftemplateentry;
        
}; // CiscoDynamicTemplateMib::Cdtiftemplatetable


class CiscoDynamicTemplateMib::Cdtiftemplatetable::Cdtiftemplateentry : public ydk::Entity
{
    public:
        Cdtiftemplateentry();
        ~Cdtiftemplateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: binary (refers to CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdtifvalid; //type: Cdtifvalid
        ydk::YLeaf cdtifmtu; //type: uint32
        ydk::YLeaf cdtifcdpenable; //type: boolean
        ydk::YLeaf cdtifflowmonitor; //type: string
        ydk::YLeaf cdtifipv4unnumbered; //type: int32
        ydk::YLeaf cdtifipv4subenable; //type: boolean
        ydk::YLeaf cdtifipv4mtu; //type: uint32
        ydk::YLeaf cdtifipv4tcpmssadjust; //type: uint32
        ydk::YLeaf cdtifipv4verifyunirpf; //type: Unicastrpftype
        ydk::YLeaf cdtifipv4verifyunirpfacl; //type: string
        ydk::YLeaf cdtifipv4verifyunirpfopts; //type: Unicastrpfoptions
        ydk::YLeaf cdtifipv6enable; //type: boolean
        ydk::YLeaf cdtifipv6subenable; //type: boolean
        ydk::YLeaf cdtifipv6tcpmssadjust; //type: uint32
        ydk::YLeaf cdtifipv6verifyunirpf; //type: Unicastrpftype
        ydk::YLeaf cdtifipv6verifyunirpfacl; //type: string
        ydk::YLeaf cdtifipv6verifyunirpfopts; //type: Unicastrpfoptions
        ydk::YLeaf cdtifipv6ndprefix; //type: string
        ydk::YLeaf cdtifipv6ndprefixlength; //type: uint32
        ydk::YLeaf cdtifipv6ndvalidlife; //type: uint32
        ydk::YLeaf cdtifipv6ndpreferredlife; //type: uint32
        ydk::YLeaf cdtifipv6ndopts; //type: Cdtifipv6Ndopts
        ydk::YLeaf cdtifipv6nddadattempts; //type: uint32
        ydk::YLeaf cdtifipv6ndnsinterval; //type: uint32
        ydk::YLeaf cdtifipv6ndreachabletime; //type: uint32
        ydk::YLeaf cdtifipv6ndraintervalunits; //type: Cdtifipv6Ndraintervalunits
        ydk::YLeaf cdtifipv6ndraintervalmax; //type: uint32
        ydk::YLeaf cdtifipv6ndraintervalmin; //type: uint32
        ydk::YLeaf cdtifipv6ndralife; //type: uint32
        ydk::YLeaf cdtifipv6ndrouterpreference; //type: Cdtifipv6Ndrouterpreference
        class Cdtifipv6Ndraintervalunits;
        class Cdtifipv6Ndrouterpreference;

}; // CiscoDynamicTemplateMib::Cdtiftemplatetable::Cdtiftemplateentry


class CiscoDynamicTemplateMib::Cdtppptemplatetable : public ydk::Entity
{
    public:
        Cdtppptemplatetable();
        ~Cdtppptemplatetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cdtppptemplateentry; //type: CiscoDynamicTemplateMib::Cdtppptemplatetable::Cdtppptemplateentry

        std::vector<std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdtppptemplatetable::Cdtppptemplateentry> > cdtppptemplateentry;
        
}; // CiscoDynamicTemplateMib::Cdtppptemplatetable


class CiscoDynamicTemplateMib::Cdtppptemplatetable::Cdtppptemplateentry : public ydk::Entity
{
    public:
        Cdtppptemplateentry();
        ~Cdtppptemplateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: binary (refers to CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdtpppvalid; //type: Cdtpppvalid
        ydk::YLeaf cdtpppaccounting; //type: boolean
        ydk::YLeaf cdtpppauthentication; //type: Cdtpppauthentication
        ydk::YLeaf cdtpppauthenticationmethods; //type: string
        ydk::YLeaf cdtpppauthorization; //type: boolean
        ydk::YLeaf cdtppploopbackignore; //type: boolean
        ydk::YLeaf cdtpppmaxbadauth; //type: uint32
        ydk::YLeaf cdtpppmaxconfigure; //type: uint32
        ydk::YLeaf cdtpppmaxfailure; //type: uint32
        ydk::YLeaf cdtpppmaxterminate; //type: uint32
        ydk::YLeaf cdtppptimeoutauthentication; //type: uint32
        ydk::YLeaf cdtppptimeoutretry; //type: uint32
        ydk::YLeaf cdtpppchapopts; //type: Cdtpppchapopts
        ydk::YLeaf cdtpppchaphostname; //type: string
        ydk::YLeaf cdtpppchappassword; //type: string
        ydk::YLeaf cdtpppmschapv1opts; //type: Cdtpppmschapv1Opts
        ydk::YLeaf cdtpppmschapv1hostname; //type: string
        ydk::YLeaf cdtpppmschapv1password; //type: string
        ydk::YLeaf cdtpppmschapv2opts; //type: Cdtpppmschapv2Opts
        ydk::YLeaf cdtpppmschapv2hostname; //type: string
        ydk::YLeaf cdtpppmschapv2password; //type: string
        ydk::YLeaf cdtppppapopts; //type: Cdtppppapopts
        ydk::YLeaf cdtppppapusername; //type: string
        ydk::YLeaf cdtppppappassword; //type: string
        ydk::YLeaf cdtpppeapopts; //type: Cdtpppeapopts
        ydk::YLeaf cdtpppeapidentity; //type: string
        ydk::YLeaf cdtpppeappassword; //type: string
        ydk::YLeaf cdtpppipcpaddroption; //type: Cdtpppipcpaddroption
        ydk::YLeaf cdtpppipcpdnsoption; //type: Cdtpppipcpdnsoption
        ydk::YLeaf cdtpppipcpdnsprimary; //type: string
        ydk::YLeaf cdtpppipcpdnssecondary; //type: string
        ydk::YLeaf cdtpppipcpwinsoption; //type: Cdtpppipcpwinsoption
        ydk::YLeaf cdtpppipcpwinsprimary; //type: string
        ydk::YLeaf cdtpppipcpwinssecondary; //type: string
        ydk::YLeaf cdtpppipcpmaskoption; //type: Cdtpppipcpmaskoption
        ydk::YLeaf cdtpppipcpmask; //type: string
        ydk::YLeaf cdtppppeerdefipaddropts; //type: Cdtppppeerdefipaddropts
        ydk::YLeaf cdtppppeerdefipaddrsrc; //type: Cdtppppeerdefipaddrsrc
        ydk::YLeaf cdtppppeerdefipaddr; //type: string
        class Cdtpppipcpaddroption;
        class Cdtpppipcpdnsoption;
        class Cdtpppipcpwinsoption;
        class Cdtpppipcpmaskoption;
        class Cdtppppeerdefipaddrsrc;

}; // CiscoDynamicTemplateMib::Cdtppptemplatetable::Cdtppptemplateentry


class CiscoDynamicTemplateMib::Cdtppppeeripaddrpooltable : public ydk::Entity
{
    public:
        Cdtppppeeripaddrpooltable();
        ~Cdtppppeeripaddrpooltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cdtppppeeripaddrpoolentry; //type: CiscoDynamicTemplateMib::Cdtppppeeripaddrpooltable::Cdtppppeeripaddrpoolentry

        std::vector<std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdtppppeeripaddrpooltable::Cdtppppeeripaddrpoolentry> > cdtppppeeripaddrpoolentry;
        
}; // CiscoDynamicTemplateMib::Cdtppppeeripaddrpooltable


class CiscoDynamicTemplateMib::Cdtppppeeripaddrpooltable::Cdtppppeeripaddrpoolentry : public ydk::Entity
{
    public:
        Cdtppppeeripaddrpoolentry();
        ~Cdtppppeeripaddrpoolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: binary (refers to CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdtppppeeripaddrpoolpriority; //type: uint32
        ydk::YLeaf cdtppppeeripaddrpoolstatus; //type: Rowstatus
        ydk::YLeaf cdtppppeeripaddrpoolstorage; //type: Storagetype
        ydk::YLeaf cdtppppeeripaddrpoolname; //type: string

}; // CiscoDynamicTemplateMib::Cdtppppeeripaddrpooltable::Cdtppppeeripaddrpoolentry


class CiscoDynamicTemplateMib::Cdtethernettemplatetable : public ydk::Entity
{
    public:
        Cdtethernettemplatetable();
        ~Cdtethernettemplatetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cdtethernettemplateentry; //type: CiscoDynamicTemplateMib::Cdtethernettemplatetable::Cdtethernettemplateentry

        std::vector<std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdtethernettemplatetable::Cdtethernettemplateentry> > cdtethernettemplateentry;
        
}; // CiscoDynamicTemplateMib::Cdtethernettemplatetable


class CiscoDynamicTemplateMib::Cdtethernettemplatetable::Cdtethernettemplateentry : public ydk::Entity
{
    public:
        Cdtethernettemplateentry();
        ~Cdtethernettemplateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: binary (refers to CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdtethernetvalid; //type: Cdtethernetvalid
        ydk::YLeaf cdtethernetbridgedomain; //type: string
        ydk::YLeaf cdtethernetpppoeenable; //type: boolean
        ydk::YLeaf cdtethernetipv4pointtopoint; //type: boolean
        ydk::YLeaf cdtethernetmacaddr; //type: string

}; // CiscoDynamicTemplateMib::Cdtethernettemplatetable::Cdtethernettemplateentry


class CiscoDynamicTemplateMib::Cdtsrvtemplatetable : public ydk::Entity
{
    public:
        Cdtsrvtemplatetable();
        ~Cdtsrvtemplatetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cdtsrvtemplateentry; //type: CiscoDynamicTemplateMib::Cdtsrvtemplatetable::Cdtsrvtemplateentry

        std::vector<std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdtsrvtemplatetable::Cdtsrvtemplateentry> > cdtsrvtemplateentry;
        
}; // CiscoDynamicTemplateMib::Cdtsrvtemplatetable


class CiscoDynamicTemplateMib::Cdtsrvtemplatetable::Cdtsrvtemplateentry : public ydk::Entity
{
    public:
        Cdtsrvtemplateentry();
        ~Cdtsrvtemplateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: binary (refers to CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdtsrvvalid; //type: Cdtsrvvalid
        ydk::YLeaf cdtsrvnetworksrv; //type: Cdtsrvnetworksrv
        ydk::YLeaf cdtsrvvpdngroup; //type: string
        ydk::YLeaf cdtsrvsgsrvgroup; //type: string
        ydk::YLeaf cdtsrvsgsrvtype; //type: Cdtsrvsgsrvtype
        ydk::YLeaf cdtsrvmulticast; //type: boolean
        class Cdtsrvnetworksrv;
        class Cdtsrvsgsrvtype;

}; // CiscoDynamicTemplateMib::Cdtsrvtemplatetable::Cdtsrvtemplateentry

class CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry::Cdttemplatesrc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf derived;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf aaaUserProfile;
        static const ydk::Enum::YLeaf aaaServiceProfile;

};

class CiscoDynamicTemplateMib::Cdtiftemplatetable::Cdtiftemplateentry::Cdtifipv6Ndraintervalunits : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf seconds;
        static const ydk::Enum::YLeaf milliseconds;

};

class CiscoDynamicTemplateMib::Cdtiftemplatetable::Cdtiftemplateentry::Cdtifipv6Ndrouterpreference : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf low;

};

class CiscoDynamicTemplateMib::Cdtppptemplatetable::Cdtppptemplateentry::Cdtpppipcpaddroption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf accept;
        static const ydk::Enum::YLeaf required;
        static const ydk::Enum::YLeaf unique;

};

class CiscoDynamicTemplateMib::Cdtppptemplatetable::Cdtppptemplateentry::Cdtpppipcpdnsoption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf accept;
        static const ydk::Enum::YLeaf request;
        static const ydk::Enum::YLeaf reject;

};

class CiscoDynamicTemplateMib::Cdtppptemplatetable::Cdtppptemplateentry::Cdtpppipcpwinsoption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf accept;
        static const ydk::Enum::YLeaf request;
        static const ydk::Enum::YLeaf reject;

};

class CiscoDynamicTemplateMib::Cdtppptemplatetable::Cdtppptemplateentry::Cdtpppipcpmaskoption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf request;
        static const ydk::Enum::YLeaf reject;

};

class CiscoDynamicTemplateMib::Cdtppptemplatetable::Cdtppptemplateentry::Cdtppppeerdefipaddrsrc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf pool;
        static const ydk::Enum::YLeaf dhcp;

};

class CiscoDynamicTemplateMib::Cdtsrvtemplatetable::Cdtsrvtemplateentry::Cdtsrvnetworksrv : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf vpdn;

};

class CiscoDynamicTemplateMib::Cdtsrvtemplatetable::Cdtsrvtemplateentry::Cdtsrvsgsrvtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf secondary;

};


}
}

#endif /* _CISCO_DYNAMIC_TEMPLATE_MIB_ */

