#ifndef _NHRP_MIB_
#define _NHRP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace NHRP_MIB {

class NhrpMib : public ydk::Entity
{
    public:
        NhrpMib();
        ~NhrpMib();

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

        class Nhrpgeneralobjects; //type: NhrpMib::Nhrpgeneralobjects
        class Nhrpcachetable; //type: NhrpMib::Nhrpcachetable
        class Nhrppurgereqtable; //type: NhrpMib::Nhrppurgereqtable
        class Nhrpclienttable; //type: NhrpMib::Nhrpclienttable
        class Nhrpclientregistrationtable; //type: NhrpMib::Nhrpclientregistrationtable
        class Nhrpclientnhstable; //type: NhrpMib::Nhrpclientnhstable
        class Nhrpclientstattable; //type: NhrpMib::Nhrpclientstattable
        class Nhrpservertable; //type: NhrpMib::Nhrpservertable
        class Nhrpservercachetable; //type: NhrpMib::Nhrpservercachetable
        class Nhrpservernhctable; //type: NhrpMib::Nhrpservernhctable
        class Nhrpserverstattable; //type: NhrpMib::Nhrpserverstattable

        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpcachetable> nhrpcachetable;
        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpclientnhstable> nhrpclientnhstable;
        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpclientregistrationtable> nhrpclientregistrationtable;
        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpclientstattable> nhrpclientstattable;
        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpclienttable> nhrpclienttable;
        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpgeneralobjects> nhrpgeneralobjects;
        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrppurgereqtable> nhrppurgereqtable;
        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpservercachetable> nhrpservercachetable;
        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpservernhctable> nhrpservernhctable;
        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpserverstattable> nhrpserverstattable;
        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpservertable> nhrpservertable;
        
}; // NhrpMib


class NhrpMib::Nhrpgeneralobjects : public ydk::Entity
{
    public:
        Nhrpgeneralobjects();
        ~Nhrpgeneralobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nhrpnextindex; //type: uint32

}; // NhrpMib::Nhrpgeneralobjects


class NhrpMib::Nhrpcachetable : public ydk::Entity
{
    public:
        Nhrpcachetable();
        ~Nhrpcachetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nhrpcacheentry; //type: NhrpMib::Nhrpcachetable::Nhrpcacheentry

        std::vector<std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpcachetable::Nhrpcacheentry> > nhrpcacheentry;
        
}; // NhrpMib::Nhrpcachetable


class NhrpMib::Nhrpcachetable::Nhrpcacheentry : public ydk::Entity
{
    public:
        Nhrpcacheentry();
        ~Nhrpcacheentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nhrpcacheinternetworkaddrtype; //type: Addressfamilynumbers
        ydk::YLeaf nhrpcacheinternetworkaddr; //type: binary
        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf nhrpcacheindex; //type: uint32
        ydk::YLeaf nhrpcacheprefixlength; //type: int32
        ydk::YLeaf nhrpcachenexthopinternetworkaddr; //type: binary
        ydk::YLeaf nhrpcachenbmaaddrtype; //type: Addressfamilynumbers
        ydk::YLeaf nhrpcachenbmaaddr; //type: binary
        ydk::YLeaf nhrpcachenbmasubaddr; //type: binary
        ydk::YLeaf nhrpcachetype; //type: Nhrpcachetype
        ydk::YLeaf nhrpcachestate; //type: Nhrpcachestate
        ydk::YLeaf nhrpcacheholdingtimevalid; //type: boolean
        ydk::YLeaf nhrpcacheholdingtime; //type: uint32
        ydk::YLeaf nhrpcachenegotiatedmtu; //type: int32
        ydk::YLeaf nhrpcachepreference; //type: int32
        ydk::YLeaf nhrpcachestoragetype; //type: Storagetype
        ydk::YLeaf nhrpcacherowstatus; //type: Rowstatus
        class Nhrpcachetype;
        class Nhrpcachestate;

}; // NhrpMib::Nhrpcachetable::Nhrpcacheentry


class NhrpMib::Nhrppurgereqtable : public ydk::Entity
{
    public:
        Nhrppurgereqtable();
        ~Nhrppurgereqtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nhrppurgereqentry; //type: NhrpMib::Nhrppurgereqtable::Nhrppurgereqentry

        std::vector<std::shared_ptr<NHRP_MIB::NhrpMib::Nhrppurgereqtable::Nhrppurgereqentry> > nhrppurgereqentry;
        
}; // NhrpMib::Nhrppurgereqtable


class NhrpMib::Nhrppurgereqtable::Nhrppurgereqentry : public ydk::Entity
{
    public:
        Nhrppurgereqentry();
        ~Nhrppurgereqentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nhrppurgeindex; //type: uint32
        ydk::YLeaf nhrppurgecacheidentifier; //type: uint32
        ydk::YLeaf nhrppurgeprefixlength; //type: int32
        ydk::YLeaf nhrppurgerequestid; //type: uint32
        ydk::YLeaf nhrppurgereplyexpected; //type: boolean
        ydk::YLeaf nhrppurgerowstatus; //type: Rowstatus

}; // NhrpMib::Nhrppurgereqtable::Nhrppurgereqentry


class NhrpMib::Nhrpclienttable : public ydk::Entity
{
    public:
        Nhrpclienttable();
        ~Nhrpclienttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nhrpcliententry; //type: NhrpMib::Nhrpclienttable::Nhrpcliententry

        std::vector<std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpclienttable::Nhrpcliententry> > nhrpcliententry;
        
}; // NhrpMib::Nhrpclienttable


class NhrpMib::Nhrpclienttable::Nhrpcliententry : public ydk::Entity
{
    public:
        Nhrpcliententry();
        ~Nhrpcliententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nhrpclientindex; //type: uint32
        ydk::YLeaf nhrpclientinternetworkaddrtype; //type: Addressfamilynumbers
        ydk::YLeaf nhrpclientinternetworkaddr; //type: binary
        ydk::YLeaf nhrpclientnbmaaddrtype; //type: Addressfamilynumbers
        ydk::YLeaf nhrpclientnbmaaddr; //type: binary
        ydk::YLeaf nhrpclientnbmasubaddr; //type: binary
        ydk::YLeaf nhrpclientinitialrequesttimeout; //type: int32
        ydk::YLeaf nhrpclientregistrationrequestretries; //type: int32
        ydk::YLeaf nhrpclientresolutionrequestretries; //type: int32
        ydk::YLeaf nhrpclientpurgerequestretries; //type: int32
        ydk::YLeaf nhrpclientdefaultmtu; //type: uint32
        ydk::YLeaf nhrpclientholdtime; //type: uint32
        ydk::YLeaf nhrpclientrequestid; //type: uint32
        ydk::YLeaf nhrpclientstoragetype; //type: Storagetype
        ydk::YLeaf nhrpclientrowstatus; //type: Rowstatus

}; // NhrpMib::Nhrpclienttable::Nhrpcliententry


class NhrpMib::Nhrpclientregistrationtable : public ydk::Entity
{
    public:
        Nhrpclientregistrationtable();
        ~Nhrpclientregistrationtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nhrpclientregistrationentry; //type: NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry

        std::vector<std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry> > nhrpclientregistrationentry;
        
}; // NhrpMib::Nhrpclientregistrationtable


class NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry : public ydk::Entity
{
    public:
        Nhrpclientregistrationentry();
        ~Nhrpclientregistrationentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to NHRP_MIB::NhrpMib::Nhrpclienttable::Nhrpcliententry::nhrpclientindex)
        ydk::YLeaf nhrpclientindex;
        ydk::YLeaf nhrpclientregindex; //type: uint32
        ydk::YLeaf nhrpclientreguniqueness; //type: Nhrpclientreguniqueness
        ydk::YLeaf nhrpclientregstate; //type: Nhrpclientregstate
        ydk::YLeaf nhrpclientregrowstatus; //type: Rowstatus
        class Nhrpclientreguniqueness;
        class Nhrpclientregstate;

}; // NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry


class NhrpMib::Nhrpclientnhstable : public ydk::Entity
{
    public:
        Nhrpclientnhstable();
        ~Nhrpclientnhstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nhrpclientnhsentry; //type: NhrpMib::Nhrpclientnhstable::Nhrpclientnhsentry

        std::vector<std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpclientnhstable::Nhrpclientnhsentry> > nhrpclientnhsentry;
        
}; // NhrpMib::Nhrpclientnhstable


class NhrpMib::Nhrpclientnhstable::Nhrpclientnhsentry : public ydk::Entity
{
    public:
        Nhrpclientnhsentry();
        ~Nhrpclientnhsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to NHRP_MIB::NhrpMib::Nhrpclienttable::Nhrpcliententry::nhrpclientindex)
        ydk::YLeaf nhrpclientindex;
        ydk::YLeaf nhrpclientnhsindex; //type: uint32
        ydk::YLeaf nhrpclientnhsinternetworkaddrtype; //type: Addressfamilynumbers
        ydk::YLeaf nhrpclientnhsinternetworkaddr; //type: binary
        ydk::YLeaf nhrpclientnhsnbmaaddrtype; //type: Addressfamilynumbers
        ydk::YLeaf nhrpclientnhsnbmaaddr; //type: binary
        ydk::YLeaf nhrpclientnhsnbmasubaddr; //type: binary
        ydk::YLeaf nhrpclientnhsinuse; //type: boolean
        ydk::YLeaf nhrpclientnhsrowstatus; //type: Rowstatus

}; // NhrpMib::Nhrpclientnhstable::Nhrpclientnhsentry


class NhrpMib::Nhrpclientstattable : public ydk::Entity
{
    public:
        Nhrpclientstattable();
        ~Nhrpclientstattable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nhrpclientstatentry; //type: NhrpMib::Nhrpclientstattable::Nhrpclientstatentry

        std::vector<std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpclientstattable::Nhrpclientstatentry> > nhrpclientstatentry;
        
}; // NhrpMib::Nhrpclientstattable


class NhrpMib::Nhrpclientstattable::Nhrpclientstatentry : public ydk::Entity
{
    public:
        Nhrpclientstatentry();
        ~Nhrpclientstatentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to NHRP_MIB::NhrpMib::Nhrpclienttable::Nhrpcliententry::nhrpclientindex)
        ydk::YLeaf nhrpclientindex;
        ydk::YLeaf nhrpclientstattxresolvereq; //type: uint32
        ydk::YLeaf nhrpclientstatrxresolvereplyack; //type: uint32
        ydk::YLeaf nhrpclientstatrxresolvereplynakprohibited; //type: uint32
        ydk::YLeaf nhrpclientstatrxresolvereplynakinsufresources; //type: uint32
        ydk::YLeaf nhrpclientstatrxresolvereplynaknobinding; //type: uint32
        ydk::YLeaf nhrpclientstatrxresolvereplynaknotunique; //type: uint32
        ydk::YLeaf nhrpclientstattxregisterreq; //type: uint32
        ydk::YLeaf nhrpclientstatrxregisterack; //type: uint32
        ydk::YLeaf nhrpclientstatrxregisternakprohibited; //type: uint32
        ydk::YLeaf nhrpclientstatrxregisternakinsufresources; //type: uint32
        ydk::YLeaf nhrpclientstatrxregisternakalreadyreg; //type: uint32
        ydk::YLeaf nhrpclientstatrxpurgereq; //type: uint32
        ydk::YLeaf nhrpclientstattxpurgereq; //type: uint32
        ydk::YLeaf nhrpclientstatrxpurgereply; //type: uint32
        ydk::YLeaf nhrpclientstattxpurgereply; //type: uint32
        ydk::YLeaf nhrpclientstattxerrorindication; //type: uint32
        ydk::YLeaf nhrpclientstatrxerrunrecognizedextension; //type: uint32
        ydk::YLeaf nhrpclientstatrxerrloopdetected; //type: uint32
        ydk::YLeaf nhrpclientstatrxerrprotoaddrunreachable; //type: uint32
        ydk::YLeaf nhrpclientstatrxerrprotoerror; //type: uint32
        ydk::YLeaf nhrpclientstatrxerrsdusizeexceeded; //type: uint32
        ydk::YLeaf nhrpclientstatrxerrinvalidextension; //type: uint32
        ydk::YLeaf nhrpclientstatrxerrauthenticationfailure; //type: uint32
        ydk::YLeaf nhrpclientstatrxerrhopcountexceeded; //type: uint32
        ydk::YLeaf nhrpclientstatdiscontinuitytime; //type: uint32

}; // NhrpMib::Nhrpclientstattable::Nhrpclientstatentry


class NhrpMib::Nhrpservertable : public ydk::Entity
{
    public:
        Nhrpservertable();
        ~Nhrpservertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nhrpserverentry; //type: NhrpMib::Nhrpservertable::Nhrpserverentry

        std::vector<std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpservertable::Nhrpserverentry> > nhrpserverentry;
        
}; // NhrpMib::Nhrpservertable


class NhrpMib::Nhrpservertable::Nhrpserverentry : public ydk::Entity
{
    public:
        Nhrpserverentry();
        ~Nhrpserverentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nhrpserverindex; //type: uint32
        ydk::YLeaf nhrpserverinternetworkaddrtype; //type: Addressfamilynumbers
        ydk::YLeaf nhrpserverinternetworkaddr; //type: binary
        ydk::YLeaf nhrpservernbmaaddrtype; //type: Addressfamilynumbers
        ydk::YLeaf nhrpservernbmaaddr; //type: binary
        ydk::YLeaf nhrpservernbmasubaddr; //type: binary
        ydk::YLeaf nhrpserverstoragetype; //type: Storagetype
        ydk::YLeaf nhrpserverrowstatus; //type: Rowstatus

}; // NhrpMib::Nhrpservertable::Nhrpserverentry


class NhrpMib::Nhrpservercachetable : public ydk::Entity
{
    public:
        Nhrpservercachetable();
        ~Nhrpservercachetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nhrpservercacheentry; //type: NhrpMib::Nhrpservercachetable::Nhrpservercacheentry

        std::vector<std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpservercachetable::Nhrpservercacheentry> > nhrpservercacheentry;
        
}; // NhrpMib::Nhrpservercachetable


class NhrpMib::Nhrpservercachetable::Nhrpservercacheentry : public ydk::Entity
{
    public:
        Nhrpservercacheentry();
        ~Nhrpservercacheentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nhrpcacheinternetworkaddrtype; //type: Addressfamilynumbers
        //type: binary (refers to NHRP_MIB::NhrpMib::Nhrpcachetable::Nhrpcacheentry::nhrpcacheinternetworkaddr)
        ydk::YLeaf nhrpcacheinternetworkaddr;
        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: uint32 (refers to NHRP_MIB::NhrpMib::Nhrpcachetable::Nhrpcacheentry::nhrpcacheindex)
        ydk::YLeaf nhrpcacheindex;
        ydk::YLeaf nhrpservercacheauthoritative; //type: boolean
        ydk::YLeaf nhrpservercacheuniqueness; //type: boolean

}; // NhrpMib::Nhrpservercachetable::Nhrpservercacheentry


class NhrpMib::Nhrpservernhctable : public ydk::Entity
{
    public:
        Nhrpservernhctable();
        ~Nhrpservernhctable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nhrpservernhcentry; //type: NhrpMib::Nhrpservernhctable::Nhrpservernhcentry

        std::vector<std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpservernhctable::Nhrpservernhcentry> > nhrpservernhcentry;
        
}; // NhrpMib::Nhrpservernhctable


class NhrpMib::Nhrpservernhctable::Nhrpservernhcentry : public ydk::Entity
{
    public:
        Nhrpservernhcentry();
        ~Nhrpservernhcentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to NHRP_MIB::NhrpMib::Nhrpservertable::Nhrpserverentry::nhrpserverindex)
        ydk::YLeaf nhrpserverindex;
        ydk::YLeaf nhrpservernhcindex; //type: uint32
        ydk::YLeaf nhrpservernhcprefixlength; //type: int32
        ydk::YLeaf nhrpservernhcinternetworkaddrtype; //type: Addressfamilynumbers
        ydk::YLeaf nhrpservernhcinternetworkaddr; //type: binary
        ydk::YLeaf nhrpservernhcnbmaaddrtype; //type: Addressfamilynumbers
        ydk::YLeaf nhrpservernhcnbmaaddr; //type: binary
        ydk::YLeaf nhrpservernhcnbmasubaddr; //type: binary
        ydk::YLeaf nhrpservernhcinuse; //type: boolean
        ydk::YLeaf nhrpservernhcrowstatus; //type: Rowstatus

}; // NhrpMib::Nhrpservernhctable::Nhrpservernhcentry


class NhrpMib::Nhrpserverstattable : public ydk::Entity
{
    public:
        Nhrpserverstattable();
        ~Nhrpserverstattable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nhrpserverstatentry; //type: NhrpMib::Nhrpserverstattable::Nhrpserverstatentry

        std::vector<std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpserverstattable::Nhrpserverstatentry> > nhrpserverstatentry;
        
}; // NhrpMib::Nhrpserverstattable


class NhrpMib::Nhrpserverstattable::Nhrpserverstatentry : public ydk::Entity
{
    public:
        Nhrpserverstatentry();
        ~Nhrpserverstatentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to NHRP_MIB::NhrpMib::Nhrpservertable::Nhrpserverentry::nhrpserverindex)
        ydk::YLeaf nhrpserverindex;
        ydk::YLeaf nhrpserverstatrxresolvereq; //type: uint32
        ydk::YLeaf nhrpserverstattxresolvereplyack; //type: uint32
        ydk::YLeaf nhrpserverstattxresolvereplynakprohibited; //type: uint32
        ydk::YLeaf nhrpserverstattxresolvereplynakinsufresources; //type: uint32
        ydk::YLeaf nhrpserverstattxresolvereplynaknobinding; //type: uint32
        ydk::YLeaf nhrpserverstattxresolvereplynaknotunique; //type: uint32
        ydk::YLeaf nhrpserverstatrxregisterreq; //type: uint32
        ydk::YLeaf nhrpserverstattxregisterack; //type: uint32
        ydk::YLeaf nhrpserverstattxregisternakprohibited; //type: uint32
        ydk::YLeaf nhrpserverstattxregisternakinsufresources; //type: uint32
        ydk::YLeaf nhrpserverstattxregisternakalreadyreg; //type: uint32
        ydk::YLeaf nhrpserverstatrxpurgereq; //type: uint32
        ydk::YLeaf nhrpserverstattxpurgereq; //type: uint32
        ydk::YLeaf nhrpserverstatrxpurgereply; //type: uint32
        ydk::YLeaf nhrpserverstattxpurgereply; //type: uint32
        ydk::YLeaf nhrpserverstatrxerrunrecognizedextension; //type: uint32
        ydk::YLeaf nhrpserverstatrxerrloopdetected; //type: uint32
        ydk::YLeaf nhrpserverstatrxerrprotoaddrunreachable; //type: uint32
        ydk::YLeaf nhrpserverstatrxerrprotoerror; //type: uint32
        ydk::YLeaf nhrpserverstatrxerrsdusizeexceeded; //type: uint32
        ydk::YLeaf nhrpserverstatrxerrinvalidextension; //type: uint32
        ydk::YLeaf nhrpserverstatrxerrinvalidresreplyreceived; //type: uint32
        ydk::YLeaf nhrpserverstatrxerrauthenticationfailure; //type: uint32
        ydk::YLeaf nhrpserverstatrxerrhopcountexceeded; //type: uint32
        ydk::YLeaf nhrpserverstattxerrunrecognizedextension; //type: uint32
        ydk::YLeaf nhrpserverstattxerrloopdetected; //type: uint32
        ydk::YLeaf nhrpserverstattxerrprotoaddrunreachable; //type: uint32
        ydk::YLeaf nhrpserverstattxerrprotoerror; //type: uint32
        ydk::YLeaf nhrpserverstattxerrsdusizeexceeded; //type: uint32
        ydk::YLeaf nhrpserverstattxerrinvalidextension; //type: uint32
        ydk::YLeaf nhrpserverstattxerrauthenticationfailure; //type: uint32
        ydk::YLeaf nhrpserverstattxerrhopcountexceeded; //type: uint32
        ydk::YLeaf nhrpserverstatfwresolvereq; //type: uint32
        ydk::YLeaf nhrpserverstatfwresolvereply; //type: uint32
        ydk::YLeaf nhrpserverstatfwregisterreq; //type: uint32
        ydk::YLeaf nhrpserverstatfwregisterreply; //type: uint32
        ydk::YLeaf nhrpserverstatfwpurgereq; //type: uint32
        ydk::YLeaf nhrpserverstatfwpurgereply; //type: uint32
        ydk::YLeaf nhrpserverstatfwerrorindication; //type: uint32
        ydk::YLeaf nhrpserverstatdiscontinuitytime; //type: uint32

}; // NhrpMib::Nhrpserverstattable::Nhrpserverstatentry

class NhrpMib::Nhrpcachetable::Nhrpcacheentry::Nhrpcachetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf register_;
        static const ydk::Enum::YLeaf resolveAuthoritative;
        static const ydk::Enum::YLeaf resoveNonauthoritative;
        static const ydk::Enum::YLeaf transit;
        static const ydk::Enum::YLeaf administrativelyAdded;
        static const ydk::Enum::YLeaf atmarp;
        static const ydk::Enum::YLeaf scsp;

};

class NhrpMib::Nhrpcachetable::Nhrpcacheentry::Nhrpcachestate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf incomplete;
        static const ydk::Enum::YLeaf ackReply;
        static const ydk::Enum::YLeaf nakReply;

};

class NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry::Nhrpclientreguniqueness : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf requestUnique;
        static const ydk::Enum::YLeaf requestNotUnique;

};

class NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry::Nhrpclientregstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf registering;
        static const ydk::Enum::YLeaf ackRegisterReply;
        static const ydk::Enum::YLeaf nakRegisterReply;

};


}
}

#endif /* _NHRP_MIB_ */

