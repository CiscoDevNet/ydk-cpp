#ifndef _CISCO_CEF_MIB_
#define _CISCO_CEF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_CEF_MIB {

class CiscoCefMib : public Entity
{
    public:
        CiscoCefMib();
        ~CiscoCefMib();

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

        class Ceffib; //type: CiscoCefMib::Ceffib
        class Cefcc; //type: CiscoCefMib::Cefcc
        class Cefnotifcntl; //type: CiscoCefMib::Cefnotifcntl
        class Ceffibsummarytable; //type: CiscoCefMib::Ceffibsummarytable
        class Cefprefixtable; //type: CiscoCefMib::Cefprefixtable
        class Ceflmprefixtable; //type: CiscoCefMib::Ceflmprefixtable
        class Cefpathtable; //type: CiscoCefMib::Cefpathtable
        class Cefadjsummarytable; //type: CiscoCefMib::Cefadjsummarytable
        class Cefadjtable; //type: CiscoCefMib::Cefadjtable
        class Ceffeselectiontable; //type: CiscoCefMib::Ceffeselectiontable
        class Cefcfgtable; //type: CiscoCefMib::Cefcfgtable
        class Cefresourcetable; //type: CiscoCefMib::Cefresourcetable
        class Cefinttable; //type: CiscoCefMib::Cefinttable
        class Cefpeertable; //type: CiscoCefMib::Cefpeertable
        class Cefpeerfibtable; //type: CiscoCefMib::Cefpeerfibtable
        class Cefccglobaltable; //type: CiscoCefMib::Cefccglobaltable
        class Cefcctypetable; //type: CiscoCefMib::Cefcctypetable
        class Cefinconsistencyrecordtable; //type: CiscoCefMib::Cefinconsistencyrecordtable
        class Cefstatsprefixlentable; //type: CiscoCefMib::Cefstatsprefixlentable
        class Cefswitchingstatstable; //type: CiscoCefMib::Cefswitchingstatstable

        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefadjsummarytable> cefadjsummarytable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefadjtable> cefadjtable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefcc> cefcc;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefccglobaltable> cefccglobaltable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefcctypetable> cefcctypetable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefcfgtable> cefcfgtable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Ceffeselectiontable> ceffeselectiontable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Ceffib> ceffib;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Ceffibsummarytable> ceffibsummarytable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefinconsistencyrecordtable> cefinconsistencyrecordtable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefinttable> cefinttable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Ceflmprefixtable> ceflmprefixtable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefnotifcntl> cefnotifcntl;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefpathtable> cefpathtable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefpeerfibtable> cefpeerfibtable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefpeertable> cefpeertable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefprefixtable> cefprefixtable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefresourcetable> cefresourcetable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefstatsprefixlentable> cefstatsprefixlentable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefswitchingstatstable> cefswitchingstatstable;
        
}; // CiscoCefMib


class CiscoCefMib::Ceffib : public Entity
{
    public:
        Ceffib();
        ~Ceffib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ceflmprefixspinlock; //type: int32

}; // CiscoCefMib::Ceffib


class CiscoCefMib::Cefcc : public Entity
{
    public:
        Cefcc();
        ~Cefcc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entlastinconsistencydetecttime; //type: uint32
        YLeaf cefinconsistencyreset; //type: CefccactionEnum
        YLeaf cefinconsistencyresetstatus; //type: CefccstatusEnum

}; // CiscoCefMib::Cefcc


class CiscoCefMib::Cefnotifcntl : public Entity
{
    public:
        Cefnotifcntl();
        ~Cefnotifcntl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cefresourcefailurenotifenable; //type: boolean
        YLeaf cefpeerstatechangenotifenable; //type: boolean
        YLeaf cefpeerfibstatechangenotifenable; //type: boolean
        YLeaf cefnotifthrottlinginterval; //type: int32
        YLeaf cefinconsistencynotifenable; //type: boolean

}; // CiscoCefMib::Cefnotifcntl


class CiscoCefMib::Ceffibsummarytable : public Entity
{
    public:
        Ceffibsummarytable();
        ~Ceffibsummarytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ceffibsummaryentry; //type: CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry> > ceffibsummaryentry;
        
}; // CiscoCefMib::Ceffibsummarytable


class CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry : public Entity
{
    public:
        Ceffibsummaryentry();
        ~Ceffibsummaryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf ceffibipversion; //type: CefipversionEnum
        YLeaf ceffibsummaryfwdprefixes; //type: uint32

}; // CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry


class CiscoCefMib::Cefprefixtable : public Entity
{
    public:
        Cefprefixtable();
        ~Cefprefixtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefprefixentry; //type: CiscoCefMib::Cefprefixtable::Cefprefixentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefprefixtable::Cefprefixentry> > cefprefixentry;
        
}; // CiscoCefMib::Cefprefixtable


class CiscoCefMib::Cefprefixtable::Cefprefixentry : public Entity
{
    public:
        Cefprefixentry();
        ~Cefprefixentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cefprefixtype; //type: InetaddresstypeEnum
        YLeaf cefprefixaddr; //type: binary
        YLeaf cefprefixlen; //type: uint32
        YLeaf cefprefixforwardinginfo; //type: string
        YLeaf cefprefixpkts; //type: uint32
        YLeaf cefprefixhcpkts; //type: uint64
        YLeaf cefprefixbytes; //type: uint32
        YLeaf cefprefixhcbytes; //type: uint64
        YLeaf cefprefixinternalnrpkts; //type: uint32
        YLeaf cefprefixinternalnrhcpkts; //type: uint64
        YLeaf cefprefixinternalnrbytes; //type: uint32
        YLeaf cefprefixinternalnrhcbytes; //type: uint64
        YLeaf cefprefixexternalnrpkts; //type: uint32
        YLeaf cefprefixexternalnrhcpkts; //type: uint64
        YLeaf cefprefixexternalnrbytes; //type: uint32
        YLeaf cefprefixexternalnrhcbytes; //type: uint64

}; // CiscoCefMib::Cefprefixtable::Cefprefixentry


class CiscoCefMib::Ceflmprefixtable : public Entity
{
    public:
        Ceflmprefixtable();
        ~Ceflmprefixtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ceflmprefixentry; //type: CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry> > ceflmprefixentry;
        
}; // CiscoCefMib::Ceflmprefixtable


class CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry : public Entity
{
    public:
        Ceflmprefixentry();
        ~Ceflmprefixentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf ceflmprefixdestaddrtype; //type: InetaddresstypeEnum
        YLeaf ceflmprefixdestaddr; //type: binary
        YLeaf ceflmprefixstate; //type: CefprefixsearchstateEnum
        YLeaf ceflmprefixaddr; //type: binary
        YLeaf ceflmprefixlen; //type: uint32
        YLeaf ceflmprefixrowstatus; //type: RowstatusEnum

}; // CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry


class CiscoCefMib::Cefpathtable : public Entity
{
    public:
        Cefpathtable();
        ~Cefpathtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefpathentry; //type: CiscoCefMib::Cefpathtable::Cefpathentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefpathtable::Cefpathentry> > cefpathentry;
        
}; // CiscoCefMib::Cefpathtable


class CiscoCefMib::Cefpathtable::Cefpathentry : public Entity
{
    public:
        Cefpathentry();
        ~Cefpathentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cefprefixtype; //type: InetaddresstypeEnum
        //type: binary (refers to CISCO_CEF_MIB::CiscoCefMib::Cefprefixtable::Cefprefixentry::cefprefixaddr)
        YLeaf cefprefixaddr;
        //type: uint32 (refers to CISCO_CEF_MIB::CiscoCefMib::Cefprefixtable::Cefprefixentry::cefprefixlen)
        YLeaf cefprefixlen;
        YLeaf cefpathid; //type: int32
        YLeaf cefpathtype; //type: CefpathtypeEnum
        YLeaf cefpathinterface; //type: int32
        YLeaf cefpathnexthopaddr; //type: binary
        YLeaf cefpathrecursevrfname; //type: binary

}; // CiscoCefMib::Cefpathtable::Cefpathentry


class CiscoCefMib::Cefadjsummarytable : public Entity
{
    public:
        Cefadjsummarytable();
        ~Cefadjsummarytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefadjsummaryentry; //type: CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry> > cefadjsummaryentry;
        
}; // CiscoCefMib::Cefadjsummarytable


class CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry : public Entity
{
    public:
        Cefadjsummaryentry();
        ~Cefadjsummaryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cefadjsummarylinktype; //type: CefadjlinktypeEnum
        YLeaf cefadjsummarycomplete; //type: uint32
        YLeaf cefadjsummaryincomplete; //type: uint32
        YLeaf cefadjsummaryfixup; //type: uint32
        YLeaf cefadjsummaryredirect; //type: uint32

}; // CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry


class CiscoCefMib::Cefadjtable : public Entity
{
    public:
        Cefadjtable();
        ~Cefadjtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefadjentry; //type: CiscoCefMib::Cefadjtable::Cefadjentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefadjtable::Cefadjentry> > cefadjentry;
        
}; // CiscoCefMib::Cefadjtable


class CiscoCefMib::Cefadjtable::Cefadjentry : public Entity
{
    public:
        Cefadjentry();
        ~Cefadjentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cefadjnexthopaddrtype; //type: InetaddresstypeEnum
        YLeaf cefadjnexthopaddr; //type: binary
        YLeaf cefadjconnid; //type: uint32
        YLeaf cefadjsummarylinktype; //type: CefadjlinktypeEnum
        YLeaf cefadjsource; //type: Cefadjacencysource
        YLeaf cefadjencap; //type: string
        YLeaf cefadjfixup; //type: string
        YLeaf cefadjmtu; //type: uint32
        YLeaf cefadjforwardinginfo; //type: string
        YLeaf cefadjpkts; //type: uint32
        YLeaf cefadjhcpkts; //type: uint64
        YLeaf cefadjbytes; //type: uint32
        YLeaf cefadjhcbytes; //type: uint64

}; // CiscoCefMib::Cefadjtable::Cefadjentry


class CiscoCefMib::Ceffeselectiontable : public Entity
{
    public:
        Ceffeselectiontable();
        ~Ceffeselectiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ceffeselectionentry; //type: CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry> > ceffeselectionentry;
        
}; // CiscoCefMib::Ceffeselectiontable


class CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry : public Entity
{
    public:
        Ceffeselectionentry();
        ~Ceffeselectionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf ceffeselectionname; //type: string
        YLeaf ceffeselectionid; //type: int32
        YLeaf ceffeselectionspecial; //type: CefforwardingelementspecialtypeEnum
        YLeaf ceffeselectionlabels; //type: binary
        YLeaf ceffeselectionadjlinktype; //type: CefadjlinktypeEnum
        YLeaf ceffeselectionadjinterface; //type: int32
        YLeaf ceffeselectionadjnexthopaddrtype; //type: InetaddresstypeEnum
        YLeaf ceffeselectionadjnexthopaddr; //type: binary
        YLeaf ceffeselectionadjconnid; //type: uint32
        YLeaf ceffeselectionvrfname; //type: binary
        YLeaf ceffeselectionweight; //type: uint32

}; // CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry


class CiscoCefMib::Cefcfgtable : public Entity
{
    public:
        Cefcfgtable();
        ~Cefcfgtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefcfgentry; //type: CiscoCefMib::Cefcfgtable::Cefcfgentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefcfgtable::Cefcfgentry> > cefcfgentry;
        
}; // CiscoCefMib::Cefcfgtable


class CiscoCefMib::Cefcfgtable::Cefcfgentry : public Entity
{
    public:
        Cefcfgentry();
        ~Cefcfgentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf ceffibipversion; //type: CefipversionEnum
        YLeaf cefcfgadminstate; //type: CefadminstatusEnum
        YLeaf cefcfgoperstate; //type: CefoperstatusEnum
        YLeaf cefcfgdistributionadminstate; //type: CefadminstatusEnum
        YLeaf cefcfgdistributionoperstate; //type: CefoperstatusEnum
        YLeaf cefcfgaccountingmap; //type: Cefcfgaccountingmap
        YLeaf cefcfgloadsharingalgorithm; //type: CefcfgloadsharingalgorithmEnum
        YLeaf cefcfgloadsharingid; //type: uint32
        YLeaf cefcfgtrafficstatsloadinterval; //type: uint32
        YLeaf cefcfgtrafficstatsupdaterate; //type: uint32
        class CefcfgloadsharingalgorithmEnum;

}; // CiscoCefMib::Cefcfgtable::Cefcfgentry


class CiscoCefMib::Cefresourcetable : public Entity
{
    public:
        Cefresourcetable();
        ~Cefresourcetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefresourceentry; //type: CiscoCefMib::Cefresourcetable::Cefresourceentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefresourcetable::Cefresourceentry> > cefresourceentry;
        
}; // CiscoCefMib::Cefresourcetable


class CiscoCefMib::Cefresourcetable::Cefresourceentry : public Entity
{
    public:
        Cefresourceentry();
        ~Cefresourceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cefresourcememoryused; //type: uint32
        YLeaf cefresourcefailurereason; //type: CeffailurereasonEnum

}; // CiscoCefMib::Cefresourcetable::Cefresourceentry


class CiscoCefMib::Cefinttable : public Entity
{
    public:
        Cefinttable();
        ~Cefinttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefintentry; //type: CiscoCefMib::Cefinttable::Cefintentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefinttable::Cefintentry> > cefintentry;
        
}; // CiscoCefMib::Cefinttable


class CiscoCefMib::Cefinttable::Cefintentry : public Entity
{
    public:
        Cefintentry();
        ~Cefintentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf ceffibipversion; //type: CefipversionEnum
        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cefintswitchingstate; //type: CefintswitchingstateEnum
        YLeaf cefintloadsharing; //type: CefintloadsharingEnum
        YLeaf cefintnonrecursiveaccouting; //type: CefintnonrecursiveaccoutingEnum
        class CefintswitchingstateEnum;
        class CefintloadsharingEnum;
        class CefintnonrecursiveaccoutingEnum;

}; // CiscoCefMib::Cefinttable::Cefintentry


class CiscoCefMib::Cefpeertable : public Entity
{
    public:
        Cefpeertable();
        ~Cefpeertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefpeerentry; //type: CiscoCefMib::Cefpeertable::Cefpeerentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefpeertable::Cefpeerentry> > cefpeerentry;
        
}; // CiscoCefMib::Cefpeertable


class CiscoCefMib::Cefpeertable::Cefpeerentry : public Entity
{
    public:
        Cefpeerentry();
        ~Cefpeerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf entpeerphysicalindex; //type: int32
        YLeaf cefpeeroperstate; //type: CefpeeroperstateEnum
        YLeaf cefpeernumberofresets; //type: uint32
        class CefpeeroperstateEnum;

}; // CiscoCefMib::Cefpeertable::Cefpeerentry


class CiscoCefMib::Cefpeerfibtable : public Entity
{
    public:
        Cefpeerfibtable();
        ~Cefpeerfibtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefpeerfibentry; //type: CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry> > cefpeerfibentry;
        
}; // CiscoCefMib::Cefpeerfibtable


class CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry : public Entity
{
    public:
        Cefpeerfibentry();
        ~Cefpeerfibentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        //type: int32 (refers to CISCO_CEF_MIB::CiscoCefMib::Cefpeertable::Cefpeerentry::entpeerphysicalindex)
        YLeaf entpeerphysicalindex;
        YLeaf ceffibipversion; //type: CefipversionEnum
        YLeaf cefpeerfiboperstate; //type: CefpeerfiboperstateEnum
        class CefpeerfiboperstateEnum;

}; // CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry


class CiscoCefMib::Cefccglobaltable : public Entity
{
    public:
        Cefccglobaltable();
        ~Cefccglobaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefccglobalentry; //type: CiscoCefMib::Cefccglobaltable::Cefccglobalentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefccglobaltable::Cefccglobalentry> > cefccglobalentry;
        
}; // CiscoCefMib::Cefccglobaltable


class CiscoCefMib::Cefccglobaltable::Cefccglobalentry : public Entity
{
    public:
        Cefccglobalentry();
        ~Cefccglobalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ceffibipversion; //type: CefipversionEnum
        YLeaf cefccglobalautorepairenabled; //type: boolean
        YLeaf cefccglobalautorepairdelay; //type: uint32
        YLeaf cefccglobalautorepairholddown; //type: uint32
        YLeaf cefccglobalerrormsgenabled; //type: boolean
        YLeaf cefccglobalfullscanaction; //type: CefccactionEnum
        YLeaf cefccglobalfullscanstatus; //type: CefccstatusEnum

}; // CiscoCefMib::Cefccglobaltable::Cefccglobalentry


class CiscoCefMib::Cefcctypetable : public Entity
{
    public:
        Cefcctypetable();
        ~Cefcctypetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefcctypeentry; //type: CiscoCefMib::Cefcctypetable::Cefcctypeentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefcctypetable::Cefcctypeentry> > cefcctypeentry;
        
}; // CiscoCefMib::Cefcctypetable


class CiscoCefMib::Cefcctypetable::Cefcctypeentry : public Entity
{
    public:
        Cefcctypeentry();
        ~Cefcctypeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ceffibipversion; //type: CefipversionEnum
        YLeaf cefcctype; //type: CefcctypeEnum
        YLeaf cefccenabled; //type: boolean
        YLeaf cefcccount; //type: uint32
        YLeaf cefccperiod; //type: uint32
        YLeaf cefccqueriessent; //type: uint32
        YLeaf cefccqueriesignored; //type: uint32
        YLeaf cefccquerieschecked; //type: uint32
        YLeaf cefccqueriesiterated; //type: uint32

}; // CiscoCefMib::Cefcctypetable::Cefcctypeentry


class CiscoCefMib::Cefinconsistencyrecordtable : public Entity
{
    public:
        Cefinconsistencyrecordtable();
        ~Cefinconsistencyrecordtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefinconsistencyrecordentry; //type: CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry> > cefinconsistencyrecordentry;
        
}; // CiscoCefMib::Cefinconsistencyrecordtable


class CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry : public Entity
{
    public:
        Cefinconsistencyrecordentry();
        ~Cefinconsistencyrecordentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ceffibipversion; //type: CefipversionEnum
        YLeaf cefinconsistencyrecid; //type: int32
        YLeaf cefinconsistencyprefixtype; //type: InetaddresstypeEnum
        YLeaf cefinconsistencyprefixaddr; //type: binary
        YLeaf cefinconsistencyprefixlen; //type: uint32
        YLeaf cefinconsistencyvrfname; //type: binary
        YLeaf cefinconsistencycctype; //type: CefcctypeEnum
        YLeaf cefinconsistencyentity; //type: int32
        YLeaf cefinconsistencyreason; //type: CefinconsistencyreasonEnum
        class CefinconsistencyreasonEnum;

}; // CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry


class CiscoCefMib::Cefstatsprefixlentable : public Entity
{
    public:
        Cefstatsprefixlentable();
        ~Cefstatsprefixlentable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefstatsprefixlenentry; //type: CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry> > cefstatsprefixlenentry;
        
}; // CiscoCefMib::Cefstatsprefixlentable


class CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry : public Entity
{
    public:
        Cefstatsprefixlenentry();
        ~Cefstatsprefixlenentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf ceffibipversion; //type: CefipversionEnum
        YLeaf cefstatsprefixlen; //type: uint32
        YLeaf cefstatsprefixqueries; //type: uint32
        YLeaf cefstatsprefixhcqueries; //type: uint64
        YLeaf cefstatsprefixinserts; //type: uint32
        YLeaf cefstatsprefixhcinserts; //type: uint64
        YLeaf cefstatsprefixdeletes; //type: uint32
        YLeaf cefstatsprefixhcdeletes; //type: uint64
        YLeaf cefstatsprefixelements; //type: uint32
        YLeaf cefstatsprefixhcelements; //type: uint64

}; // CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry


class CiscoCefMib::Cefswitchingstatstable : public Entity
{
    public:
        Cefswitchingstatstable();
        ~Cefswitchingstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefswitchingstatsentry; //type: CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry> > cefswitchingstatsentry;
        
}; // CiscoCefMib::Cefswitchingstatstable


class CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry : public Entity
{
    public:
        Cefswitchingstatsentry();
        ~Cefswitchingstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf ceffibipversion; //type: CefipversionEnum
        YLeaf cefswitchingindex; //type: int32
        YLeaf cefswitchingpath; //type: string
        YLeaf cefswitchingdrop; //type: uint32
        YLeaf cefswitchinghcdrop; //type: uint64
        YLeaf cefswitchingpunt; //type: uint32
        YLeaf cefswitchinghcpunt; //type: uint64
        YLeaf cefswitchingpunt2host; //type: uint32
        YLeaf cefswitchinghcpunt2host; //type: uint64

}; // CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry

class CiscoCefMib::Cefcfgtable::Cefcfgentry::CefcfgloadsharingalgorithmEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf original;
        static const Enum::YLeaf tunnel;
        static const Enum::YLeaf universal;

};

class CiscoCefMib::Cefinttable::Cefintentry::CefintswitchingstateEnum : public Enum
{
    public:
        static const Enum::YLeaf cefEnabled;
        static const Enum::YLeaf distCefEnabled;
        static const Enum::YLeaf cefDisabled;

};

class CiscoCefMib::Cefinttable::Cefintentry::CefintloadsharingEnum : public Enum
{
    public:
        static const Enum::YLeaf perPacket;
        static const Enum::YLeaf perDestination;

};

class CiscoCefMib::Cefinttable::Cefintentry::CefintnonrecursiveaccoutingEnum : public Enum
{
    public:
        static const Enum::YLeaf internal;
        static const Enum::YLeaf external;

};

class CiscoCefMib::Cefpeertable::Cefpeerentry::CefpeeroperstateEnum : public Enum
{
    public:
        static const Enum::YLeaf peerDisabled;
        static const Enum::YLeaf peerUp;
        static const Enum::YLeaf peerHold;

};

class CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::CefpeerfiboperstateEnum : public Enum
{
    public:
        static const Enum::YLeaf peerFIBDown;
        static const Enum::YLeaf peerFIBUp;
        static const Enum::YLeaf peerFIBReloadRequest;
        static const Enum::YLeaf peerFIBReloading;
        static const Enum::YLeaf peerFIBSynced;

};

class CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::CefinconsistencyreasonEnum : public Enum
{
    public:
        static const Enum::YLeaf missing;
        static const Enum::YLeaf checksumErr;
        static const Enum::YLeaf unknown;

};


}
}

#endif /* _CISCO_CEF_MIB_ */

