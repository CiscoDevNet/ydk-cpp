#ifndef _NHRP_MIB_
#define _NHRP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace NHRP_MIB {

class NhrpMib : public Entity
{
    public:
        NhrpMib();
        ~NhrpMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

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

        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpcachetable> nhrpcachetable_;
        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpclientnhstable> nhrpclientnhstable_;
        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpclientregistrationtable> nhrpclientregistrationtable_;
        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpclientstattable> nhrpclientstattable_;
        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpclienttable> nhrpclienttable_;
        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpgeneralobjects> nhrpgeneralobjects_;
        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrppurgereqtable> nhrppurgereqtable_;
        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpservercachetable> nhrpservercachetable_;
        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpservernhctable> nhrpservernhctable_;
        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpserverstattable> nhrpserverstattable_;
        std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpservertable> nhrpservertable_;
        
}; // NhrpMib


class NhrpMib::Nhrpgeneralobjects : public Entity
{
    public:
        Nhrpgeneralobjects();
        ~Nhrpgeneralobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nhrpnextindex; //type: uint32

}; // NhrpMib::Nhrpgeneralobjects


class NhrpMib::Nhrpcachetable : public Entity
{
    public:
        Nhrpcachetable();
        ~Nhrpcachetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nhrpcacheentry; //type: NhrpMib::Nhrpcachetable::Nhrpcacheentry

        std::vector<std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpcachetable::Nhrpcacheentry> > nhrpcacheentry_;
        
}; // NhrpMib::Nhrpcachetable


class NhrpMib::Nhrpcachetable::Nhrpcacheentry : public Entity
{
    public:
        Nhrpcacheentry();
        ~Nhrpcacheentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nhrpcacheinternetworkaddrtype; //type: AddressfamilynumbersEnum
        YLeaf nhrpcacheinternetworkaddr; //type: binary
        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf nhrpcacheindex; //type: uint32
        YLeaf nhrpcacheprefixlength; //type: int32
        YLeaf nhrpcachenexthopinternetworkaddr; //type: binary
        YLeaf nhrpcachenbmaaddrtype; //type: AddressfamilynumbersEnum
        YLeaf nhrpcachenbmaaddr; //type: binary
        YLeaf nhrpcachenbmasubaddr; //type: binary
        YLeaf nhrpcachetype; //type: NhrpcachetypeEnum
        YLeaf nhrpcachestate; //type: NhrpcachestateEnum
        YLeaf nhrpcacheholdingtimevalid; //type: boolean
        YLeaf nhrpcacheholdingtime; //type: uint32
        YLeaf nhrpcachenegotiatedmtu; //type: int32
        YLeaf nhrpcachepreference; //type: int32
        YLeaf nhrpcachestoragetype; //type: StoragetypeEnum
        YLeaf nhrpcacherowstatus; //type: RowstatusEnum
        class NhrpcachetypeEnum;
        class NhrpcachestateEnum;

}; // NhrpMib::Nhrpcachetable::Nhrpcacheentry


class NhrpMib::Nhrppurgereqtable : public Entity
{
    public:
        Nhrppurgereqtable();
        ~Nhrppurgereqtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nhrppurgereqentry; //type: NhrpMib::Nhrppurgereqtable::Nhrppurgereqentry

        std::vector<std::shared_ptr<NHRP_MIB::NhrpMib::Nhrppurgereqtable::Nhrppurgereqentry> > nhrppurgereqentry_;
        
}; // NhrpMib::Nhrppurgereqtable


class NhrpMib::Nhrppurgereqtable::Nhrppurgereqentry : public Entity
{
    public:
        Nhrppurgereqentry();
        ~Nhrppurgereqentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nhrppurgeindex; //type: uint32
        YLeaf nhrppurgecacheidentifier; //type: uint32
        YLeaf nhrppurgeprefixlength; //type: int32
        YLeaf nhrppurgerequestid; //type: uint32
        YLeaf nhrppurgereplyexpected; //type: boolean
        YLeaf nhrppurgerowstatus; //type: RowstatusEnum

}; // NhrpMib::Nhrppurgereqtable::Nhrppurgereqentry


class NhrpMib::Nhrpclienttable : public Entity
{
    public:
        Nhrpclienttable();
        ~Nhrpclienttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nhrpcliententry; //type: NhrpMib::Nhrpclienttable::Nhrpcliententry

        std::vector<std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpclienttable::Nhrpcliententry> > nhrpcliententry_;
        
}; // NhrpMib::Nhrpclienttable


class NhrpMib::Nhrpclienttable::Nhrpcliententry : public Entity
{
    public:
        Nhrpcliententry();
        ~Nhrpcliententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nhrpclientindex; //type: uint32
        YLeaf nhrpclientinternetworkaddrtype; //type: AddressfamilynumbersEnum
        YLeaf nhrpclientinternetworkaddr; //type: binary
        YLeaf nhrpclientnbmaaddrtype; //type: AddressfamilynumbersEnum
        YLeaf nhrpclientnbmaaddr; //type: binary
        YLeaf nhrpclientnbmasubaddr; //type: binary
        YLeaf nhrpclientinitialrequesttimeout; //type: int32
        YLeaf nhrpclientregistrationrequestretries; //type: int32
        YLeaf nhrpclientresolutionrequestretries; //type: int32
        YLeaf nhrpclientpurgerequestretries; //type: int32
        YLeaf nhrpclientdefaultmtu; //type: uint32
        YLeaf nhrpclientholdtime; //type: uint32
        YLeaf nhrpclientrequestid; //type: uint32
        YLeaf nhrpclientstoragetype; //type: StoragetypeEnum
        YLeaf nhrpclientrowstatus; //type: RowstatusEnum

}; // NhrpMib::Nhrpclienttable::Nhrpcliententry


class NhrpMib::Nhrpclientregistrationtable : public Entity
{
    public:
        Nhrpclientregistrationtable();
        ~Nhrpclientregistrationtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nhrpclientregistrationentry; //type: NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry

        std::vector<std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry> > nhrpclientregistrationentry_;
        
}; // NhrpMib::Nhrpclientregistrationtable


class NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry : public Entity
{
    public:
        Nhrpclientregistrationentry();
        ~Nhrpclientregistrationentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to NHRP_MIB::NhrpMib::Nhrpclienttable::Nhrpcliententry::nhrpclientindex)
        YLeaf nhrpclientindex;
        YLeaf nhrpclientregindex; //type: uint32
        YLeaf nhrpclientreguniqueness; //type: NhrpclientreguniquenessEnum
        YLeaf nhrpclientregstate; //type: NhrpclientregstateEnum
        YLeaf nhrpclientregrowstatus; //type: RowstatusEnum
        class NhrpclientreguniquenessEnum;
        class NhrpclientregstateEnum;

}; // NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry


class NhrpMib::Nhrpclientnhstable : public Entity
{
    public:
        Nhrpclientnhstable();
        ~Nhrpclientnhstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nhrpclientnhsentry; //type: NhrpMib::Nhrpclientnhstable::Nhrpclientnhsentry

        std::vector<std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpclientnhstable::Nhrpclientnhsentry> > nhrpclientnhsentry_;
        
}; // NhrpMib::Nhrpclientnhstable


class NhrpMib::Nhrpclientnhstable::Nhrpclientnhsentry : public Entity
{
    public:
        Nhrpclientnhsentry();
        ~Nhrpclientnhsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to NHRP_MIB::NhrpMib::Nhrpclienttable::Nhrpcliententry::nhrpclientindex)
        YLeaf nhrpclientindex;
        YLeaf nhrpclientnhsindex; //type: uint32
        YLeaf nhrpclientnhsinternetworkaddrtype; //type: AddressfamilynumbersEnum
        YLeaf nhrpclientnhsinternetworkaddr; //type: binary
        YLeaf nhrpclientnhsnbmaaddrtype; //type: AddressfamilynumbersEnum
        YLeaf nhrpclientnhsnbmaaddr; //type: binary
        YLeaf nhrpclientnhsnbmasubaddr; //type: binary
        YLeaf nhrpclientnhsinuse; //type: boolean
        YLeaf nhrpclientnhsrowstatus; //type: RowstatusEnum

}; // NhrpMib::Nhrpclientnhstable::Nhrpclientnhsentry


class NhrpMib::Nhrpclientstattable : public Entity
{
    public:
        Nhrpclientstattable();
        ~Nhrpclientstattable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nhrpclientstatentry; //type: NhrpMib::Nhrpclientstattable::Nhrpclientstatentry

        std::vector<std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpclientstattable::Nhrpclientstatentry> > nhrpclientstatentry_;
        
}; // NhrpMib::Nhrpclientstattable


class NhrpMib::Nhrpclientstattable::Nhrpclientstatentry : public Entity
{
    public:
        Nhrpclientstatentry();
        ~Nhrpclientstatentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to NHRP_MIB::NhrpMib::Nhrpclienttable::Nhrpcliententry::nhrpclientindex)
        YLeaf nhrpclientindex;
        YLeaf nhrpclientstattxresolvereq; //type: uint32
        YLeaf nhrpclientstatrxresolvereplyack; //type: uint32
        YLeaf nhrpclientstatrxresolvereplynakprohibited; //type: uint32
        YLeaf nhrpclientstatrxresolvereplynakinsufresources; //type: uint32
        YLeaf nhrpclientstatrxresolvereplynaknobinding; //type: uint32
        YLeaf nhrpclientstatrxresolvereplynaknotunique; //type: uint32
        YLeaf nhrpclientstattxregisterreq; //type: uint32
        YLeaf nhrpclientstatrxregisterack; //type: uint32
        YLeaf nhrpclientstatrxregisternakprohibited; //type: uint32
        YLeaf nhrpclientstatrxregisternakinsufresources; //type: uint32
        YLeaf nhrpclientstatrxregisternakalreadyreg; //type: uint32
        YLeaf nhrpclientstatrxpurgereq; //type: uint32
        YLeaf nhrpclientstattxpurgereq; //type: uint32
        YLeaf nhrpclientstatrxpurgereply; //type: uint32
        YLeaf nhrpclientstattxpurgereply; //type: uint32
        YLeaf nhrpclientstattxerrorindication; //type: uint32
        YLeaf nhrpclientstatrxerrunrecognizedextension; //type: uint32
        YLeaf nhrpclientstatrxerrloopdetected; //type: uint32
        YLeaf nhrpclientstatrxerrprotoaddrunreachable; //type: uint32
        YLeaf nhrpclientstatrxerrprotoerror; //type: uint32
        YLeaf nhrpclientstatrxerrsdusizeexceeded; //type: uint32
        YLeaf nhrpclientstatrxerrinvalidextension; //type: uint32
        YLeaf nhrpclientstatrxerrauthenticationfailure; //type: uint32
        YLeaf nhrpclientstatrxerrhopcountexceeded; //type: uint32
        YLeaf nhrpclientstatdiscontinuitytime; //type: uint32

}; // NhrpMib::Nhrpclientstattable::Nhrpclientstatentry


class NhrpMib::Nhrpservertable : public Entity
{
    public:
        Nhrpservertable();
        ~Nhrpservertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nhrpserverentry; //type: NhrpMib::Nhrpservertable::Nhrpserverentry

        std::vector<std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpservertable::Nhrpserverentry> > nhrpserverentry_;
        
}; // NhrpMib::Nhrpservertable


class NhrpMib::Nhrpservertable::Nhrpserverentry : public Entity
{
    public:
        Nhrpserverentry();
        ~Nhrpserverentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nhrpserverindex; //type: uint32
        YLeaf nhrpserverinternetworkaddrtype; //type: AddressfamilynumbersEnum
        YLeaf nhrpserverinternetworkaddr; //type: binary
        YLeaf nhrpservernbmaaddrtype; //type: AddressfamilynumbersEnum
        YLeaf nhrpservernbmaaddr; //type: binary
        YLeaf nhrpservernbmasubaddr; //type: binary
        YLeaf nhrpserverstoragetype; //type: StoragetypeEnum
        YLeaf nhrpserverrowstatus; //type: RowstatusEnum

}; // NhrpMib::Nhrpservertable::Nhrpserverentry


class NhrpMib::Nhrpservercachetable : public Entity
{
    public:
        Nhrpservercachetable();
        ~Nhrpservercachetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nhrpservercacheentry; //type: NhrpMib::Nhrpservercachetable::Nhrpservercacheentry

        std::vector<std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpservercachetable::Nhrpservercacheentry> > nhrpservercacheentry_;
        
}; // NhrpMib::Nhrpservercachetable


class NhrpMib::Nhrpservercachetable::Nhrpservercacheentry : public Entity
{
    public:
        Nhrpservercacheentry();
        ~Nhrpservercacheentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nhrpcacheinternetworkaddrtype; //type: AddressfamilynumbersEnum
        //type: binary (refers to NHRP_MIB::NhrpMib::Nhrpcachetable::Nhrpcacheentry::nhrpcacheinternetworkaddr)
        YLeaf nhrpcacheinternetworkaddr;
        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: uint32 (refers to NHRP_MIB::NhrpMib::Nhrpcachetable::Nhrpcacheentry::nhrpcacheindex)
        YLeaf nhrpcacheindex;
        YLeaf nhrpservercacheauthoritative; //type: boolean
        YLeaf nhrpservercacheuniqueness; //type: boolean

}; // NhrpMib::Nhrpservercachetable::Nhrpservercacheentry


class NhrpMib::Nhrpservernhctable : public Entity
{
    public:
        Nhrpservernhctable();
        ~Nhrpservernhctable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nhrpservernhcentry; //type: NhrpMib::Nhrpservernhctable::Nhrpservernhcentry

        std::vector<std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpservernhctable::Nhrpservernhcentry> > nhrpservernhcentry_;
        
}; // NhrpMib::Nhrpservernhctable


class NhrpMib::Nhrpservernhctable::Nhrpservernhcentry : public Entity
{
    public:
        Nhrpservernhcentry();
        ~Nhrpservernhcentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to NHRP_MIB::NhrpMib::Nhrpservertable::Nhrpserverentry::nhrpserverindex)
        YLeaf nhrpserverindex;
        YLeaf nhrpservernhcindex; //type: uint32
        YLeaf nhrpservernhcprefixlength; //type: int32
        YLeaf nhrpservernhcinternetworkaddrtype; //type: AddressfamilynumbersEnum
        YLeaf nhrpservernhcinternetworkaddr; //type: binary
        YLeaf nhrpservernhcnbmaaddrtype; //type: AddressfamilynumbersEnum
        YLeaf nhrpservernhcnbmaaddr; //type: binary
        YLeaf nhrpservernhcnbmasubaddr; //type: binary
        YLeaf nhrpservernhcinuse; //type: boolean
        YLeaf nhrpservernhcrowstatus; //type: RowstatusEnum

}; // NhrpMib::Nhrpservernhctable::Nhrpservernhcentry


class NhrpMib::Nhrpserverstattable : public Entity
{
    public:
        Nhrpserverstattable();
        ~Nhrpserverstattable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nhrpserverstatentry; //type: NhrpMib::Nhrpserverstattable::Nhrpserverstatentry

        std::vector<std::shared_ptr<NHRP_MIB::NhrpMib::Nhrpserverstattable::Nhrpserverstatentry> > nhrpserverstatentry_;
        
}; // NhrpMib::Nhrpserverstattable


class NhrpMib::Nhrpserverstattable::Nhrpserverstatentry : public Entity
{
    public:
        Nhrpserverstatentry();
        ~Nhrpserverstatentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to NHRP_MIB::NhrpMib::Nhrpservertable::Nhrpserverentry::nhrpserverindex)
        YLeaf nhrpserverindex;
        YLeaf nhrpserverstatrxresolvereq; //type: uint32
        YLeaf nhrpserverstattxresolvereplyack; //type: uint32
        YLeaf nhrpserverstattxresolvereplynakprohibited; //type: uint32
        YLeaf nhrpserverstattxresolvereplynakinsufresources; //type: uint32
        YLeaf nhrpserverstattxresolvereplynaknobinding; //type: uint32
        YLeaf nhrpserverstattxresolvereplynaknotunique; //type: uint32
        YLeaf nhrpserverstatrxregisterreq; //type: uint32
        YLeaf nhrpserverstattxregisterack; //type: uint32
        YLeaf nhrpserverstattxregisternakprohibited; //type: uint32
        YLeaf nhrpserverstattxregisternakinsufresources; //type: uint32
        YLeaf nhrpserverstattxregisternakalreadyreg; //type: uint32
        YLeaf nhrpserverstatrxpurgereq; //type: uint32
        YLeaf nhrpserverstattxpurgereq; //type: uint32
        YLeaf nhrpserverstatrxpurgereply; //type: uint32
        YLeaf nhrpserverstattxpurgereply; //type: uint32
        YLeaf nhrpserverstatrxerrunrecognizedextension; //type: uint32
        YLeaf nhrpserverstatrxerrloopdetected; //type: uint32
        YLeaf nhrpserverstatrxerrprotoaddrunreachable; //type: uint32
        YLeaf nhrpserverstatrxerrprotoerror; //type: uint32
        YLeaf nhrpserverstatrxerrsdusizeexceeded; //type: uint32
        YLeaf nhrpserverstatrxerrinvalidextension; //type: uint32
        YLeaf nhrpserverstatrxerrinvalidresreplyreceived; //type: uint32
        YLeaf nhrpserverstatrxerrauthenticationfailure; //type: uint32
        YLeaf nhrpserverstatrxerrhopcountexceeded; //type: uint32
        YLeaf nhrpserverstattxerrunrecognizedextension; //type: uint32
        YLeaf nhrpserverstattxerrloopdetected; //type: uint32
        YLeaf nhrpserverstattxerrprotoaddrunreachable; //type: uint32
        YLeaf nhrpserverstattxerrprotoerror; //type: uint32
        YLeaf nhrpserverstattxerrsdusizeexceeded; //type: uint32
        YLeaf nhrpserverstattxerrinvalidextension; //type: uint32
        YLeaf nhrpserverstattxerrauthenticationfailure; //type: uint32
        YLeaf nhrpserverstattxerrhopcountexceeded; //type: uint32
        YLeaf nhrpserverstatfwresolvereq; //type: uint32
        YLeaf nhrpserverstatfwresolvereply; //type: uint32
        YLeaf nhrpserverstatfwregisterreq; //type: uint32
        YLeaf nhrpserverstatfwregisterreply; //type: uint32
        YLeaf nhrpserverstatfwpurgereq; //type: uint32
        YLeaf nhrpserverstatfwpurgereply; //type: uint32
        YLeaf nhrpserverstatfwerrorindication; //type: uint32
        YLeaf nhrpserverstatdiscontinuitytime; //type: uint32

}; // NhrpMib::Nhrpserverstattable::Nhrpserverstatentry

class NhrpMib::Nhrpcachetable::Nhrpcacheentry::NhrpcachetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf register_;
        static const Enum::YLeaf resolveAuthoritative;
        static const Enum::YLeaf resoveNonauthoritative;
        static const Enum::YLeaf transit;
        static const Enum::YLeaf administrativelyAdded;
        static const Enum::YLeaf atmarp;
        static const Enum::YLeaf scsp;

};

class NhrpMib::Nhrpcachetable::Nhrpcacheentry::NhrpcachestateEnum : public Enum
{
    public:
        static const Enum::YLeaf incomplete;
        static const Enum::YLeaf ackReply;
        static const Enum::YLeaf nakReply;

};

class NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry::NhrpclientreguniquenessEnum : public Enum
{
    public:
        static const Enum::YLeaf requestUnique;
        static const Enum::YLeaf requestNotUnique;

};

class NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry::NhrpclientregstateEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf registering;
        static const Enum::YLeaf ackRegisterReply;
        static const Enum::YLeaf nakRegisterReply;

};


}
}

#endif /* _NHRP_MIB_ */

