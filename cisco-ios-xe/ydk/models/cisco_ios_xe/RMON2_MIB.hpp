#ifndef _RMON2_MIB_
#define _RMON2_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace RMON2_MIB {

class Rmon2Mib : public ydk::Entity
{
    public:
        Rmon2Mib();
        ~Rmon2Mib();

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

        class Protocoldir; //type: Rmon2Mib::Protocoldir
        class Addressmap; //type: Rmon2Mib::Addressmap
        class Probeconfig; //type: Rmon2Mib::Probeconfig
        class Protocoldirtable; //type: Rmon2Mib::Protocoldirtable
        class Protocoldistcontroltable; //type: Rmon2Mib::Protocoldistcontroltable
        class Protocoldiststatstable; //type: Rmon2Mib::Protocoldiststatstable
        class Addressmapcontroltable; //type: Rmon2Mib::Addressmapcontroltable
        class Addressmaptable; //type: Rmon2Mib::Addressmaptable
        class Hlhostcontroltable; //type: Rmon2Mib::Hlhostcontroltable
        class Nlhosttable; //type: Rmon2Mib::Nlhosttable
        class Hlmatrixcontroltable; //type: Rmon2Mib::Hlmatrixcontroltable
        class Nlmatrixsdtable; //type: Rmon2Mib::Nlmatrixsdtable
        class Nlmatrixdstable; //type: Rmon2Mib::Nlmatrixdstable
        class Nlmatrixtopncontroltable; //type: Rmon2Mib::Nlmatrixtopncontroltable
        class Nlmatrixtopntable; //type: Rmon2Mib::Nlmatrixtopntable
        class Alhosttable; //type: Rmon2Mib::Alhosttable
        class Almatrixsdtable; //type: Rmon2Mib::Almatrixsdtable
        class Almatrixdstable; //type: Rmon2Mib::Almatrixdstable
        class Almatrixtopncontroltable; //type: Rmon2Mib::Almatrixtopncontroltable
        class Almatrixtopntable; //type: Rmon2Mib::Almatrixtopntable
        class Usrhistorycontroltable; //type: Rmon2Mib::Usrhistorycontroltable
        class Usrhistoryobjecttable; //type: Rmon2Mib::Usrhistoryobjecttable
        class Usrhistorytable; //type: Rmon2Mib::Usrhistorytable
        class Serialconfigtable; //type: Rmon2Mib::Serialconfigtable
        class Netconfigtable; //type: Rmon2Mib::Netconfigtable
        class Trapdesttable; //type: Rmon2Mib::Trapdesttable
        class Serialconnectiontable; //type: Rmon2Mib::Serialconnectiontable

        std::shared_ptr<RMON2_MIB::Rmon2Mib::Addressmap> addressmap;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Addressmapcontroltable> addressmapcontroltable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Addressmaptable> addressmaptable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Alhosttable> alhosttable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Almatrixdstable> almatrixdstable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Almatrixsdtable> almatrixsdtable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Almatrixtopncontroltable> almatrixtopncontroltable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Almatrixtopntable> almatrixtopntable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Hlhostcontroltable> hlhostcontroltable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Hlmatrixcontroltable> hlmatrixcontroltable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Netconfigtable> netconfigtable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Nlhosttable> nlhosttable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Nlmatrixdstable> nlmatrixdstable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Nlmatrixsdtable> nlmatrixsdtable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Nlmatrixtopncontroltable> nlmatrixtopncontroltable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Nlmatrixtopntable> nlmatrixtopntable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Probeconfig> probeconfig;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Protocoldir> protocoldir;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Protocoldirtable> protocoldirtable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Protocoldistcontroltable> protocoldistcontroltable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Protocoldiststatstable> protocoldiststatstable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Serialconfigtable> serialconfigtable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Serialconnectiontable> serialconnectiontable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Trapdesttable> trapdesttable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Usrhistorycontroltable> usrhistorycontroltable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Usrhistoryobjecttable> usrhistoryobjecttable;
        std::shared_ptr<RMON2_MIB::Rmon2Mib::Usrhistorytable> usrhistorytable;
        
}; // Rmon2Mib


class Rmon2Mib::Protocoldir : public ydk::Entity
{
    public:
        Protocoldir();
        ~Protocoldir();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocoldirlastchange; //type: uint32

}; // Rmon2Mib::Protocoldir


class Rmon2Mib::Addressmap : public ydk::Entity
{
    public:
        Addressmap();
        ~Addressmap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addressmapinserts; //type: uint32
        ydk::YLeaf addressmapdeletes; //type: uint32
        ydk::YLeaf addressmapmaxdesiredentries; //type: int32

}; // Rmon2Mib::Addressmap


class Rmon2Mib::Probeconfig : public ydk::Entity
{
    public:
        Probeconfig();
        ~Probeconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf probecapabilities; //type: binary
        ydk::YLeaf probesoftwarerev; //type: string
        ydk::YLeaf probehardwarerev; //type: string
        ydk::YLeaf probedatetime; //type: binary
        ydk::YLeaf proberesetcontrol; //type: Proberesetcontrol
        ydk::YLeaf probedownloadfile; //type: string
        ydk::YLeaf probedownloadtftpserver; //type: string
        ydk::YLeaf probedownloadaction; //type: Probedownloadaction
        ydk::YLeaf probedownloadstatus; //type: Probedownloadstatus
        ydk::YLeaf netdefaultgateway; //type: string
        class Proberesetcontrol;
        class Probedownloadaction;
        class Probedownloadstatus;

}; // Rmon2Mib::Probeconfig


class Rmon2Mib::Protocoldirtable : public ydk::Entity
{
    public:
        Protocoldirtable();
        ~Protocoldirtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protocoldirentry; //type: Rmon2Mib::Protocoldirtable::Protocoldirentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Protocoldirtable::Protocoldirentry> > protocoldirentry;
        
}; // Rmon2Mib::Protocoldirtable


class Rmon2Mib::Protocoldirtable::Protocoldirentry : public ydk::Entity
{
    public:
        Protocoldirentry();
        ~Protocoldirentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocoldirid; //type: binary
        ydk::YLeaf protocoldirparameters; //type: binary
        ydk::YLeaf protocoldirlocalindex; //type: int32
        ydk::YLeaf protocoldirdescr; //type: string
        ydk::YLeaf protocoldirtype; //type: binary
        ydk::YLeaf protocoldiraddressmapconfig; //type: Protocoldiraddressmapconfig
        ydk::YLeaf protocoldirhostconfig; //type: Protocoldirhostconfig
        ydk::YLeaf protocoldirmatrixconfig; //type: Protocoldirmatrixconfig
        ydk::YLeaf protocoldirowner; //type: binary
        ydk::YLeaf protocoldirstatus; //type: Rowstatus
        class Protocoldiraddressmapconfig;
        class Protocoldirhostconfig;
        class Protocoldirmatrixconfig;

}; // Rmon2Mib::Protocoldirtable::Protocoldirentry


class Rmon2Mib::Protocoldistcontroltable : public ydk::Entity
{
    public:
        Protocoldistcontroltable();
        ~Protocoldistcontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protocoldistcontrolentry; //type: Rmon2Mib::Protocoldistcontroltable::Protocoldistcontrolentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Protocoldistcontroltable::Protocoldistcontrolentry> > protocoldistcontrolentry;
        
}; // Rmon2Mib::Protocoldistcontroltable


class Rmon2Mib::Protocoldistcontroltable::Protocoldistcontrolentry : public ydk::Entity
{
    public:
        Protocoldistcontrolentry();
        ~Protocoldistcontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocoldistcontrolindex; //type: int32
        ydk::YLeaf protocoldistcontroldatasource; //type: string
        ydk::YLeaf protocoldistcontroldroppedframes; //type: uint32
        ydk::YLeaf protocoldistcontrolcreatetime; //type: uint32
        ydk::YLeaf protocoldistcontrolowner; //type: binary
        ydk::YLeaf protocoldistcontrolstatus; //type: Rowstatus

}; // Rmon2Mib::Protocoldistcontroltable::Protocoldistcontrolentry


class Rmon2Mib::Protocoldiststatstable : public ydk::Entity
{
    public:
        Protocoldiststatstable();
        ~Protocoldiststatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protocoldiststatsentry; //type: Rmon2Mib::Protocoldiststatstable::Protocoldiststatsentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Protocoldiststatstable::Protocoldiststatsentry> > protocoldiststatsentry;
        
}; // Rmon2Mib::Protocoldiststatstable


class Rmon2Mib::Protocoldiststatstable::Protocoldiststatsentry : public ydk::Entity
{
    public:
        Protocoldiststatsentry();
        ~Protocoldiststatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Protocoldistcontroltable::Protocoldistcontrolentry::protocoldistcontrolindex)
        ydk::YLeaf protocoldistcontrolindex;
        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        ydk::YLeaf protocoldiststatspkts; //type: uint32
        ydk::YLeaf protocoldiststatsoctets; //type: uint32

}; // Rmon2Mib::Protocoldiststatstable::Protocoldiststatsentry


class Rmon2Mib::Addressmapcontroltable : public ydk::Entity
{
    public:
        Addressmapcontroltable();
        ~Addressmapcontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Addressmapcontrolentry; //type: Rmon2Mib::Addressmapcontroltable::Addressmapcontrolentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Addressmapcontroltable::Addressmapcontrolentry> > addressmapcontrolentry;
        
}; // Rmon2Mib::Addressmapcontroltable


class Rmon2Mib::Addressmapcontroltable::Addressmapcontrolentry : public ydk::Entity
{
    public:
        Addressmapcontrolentry();
        ~Addressmapcontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addressmapcontrolindex; //type: int32
        ydk::YLeaf addressmapcontroldatasource; //type: string
        ydk::YLeaf addressmapcontroldroppedframes; //type: uint32
        ydk::YLeaf addressmapcontrolowner; //type: binary
        ydk::YLeaf addressmapcontrolstatus; //type: Rowstatus

}; // Rmon2Mib::Addressmapcontroltable::Addressmapcontrolentry


class Rmon2Mib::Addressmaptable : public ydk::Entity
{
    public:
        Addressmaptable();
        ~Addressmaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Addressmapentry; //type: Rmon2Mib::Addressmaptable::Addressmapentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Addressmaptable::Addressmapentry> > addressmapentry;
        
}; // Rmon2Mib::Addressmaptable


class Rmon2Mib::Addressmaptable::Addressmapentry : public ydk::Entity
{
    public:
        Addressmapentry();
        ~Addressmapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addressmaptimemark; //type: uint32
        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        ydk::YLeaf addressmapnetworkaddress; //type: binary
        ydk::YLeaf addressmapsource; //type: string
        ydk::YLeaf addressmapphysicaladdress; //type: binary
        ydk::YLeaf addressmaplastchange; //type: uint32

}; // Rmon2Mib::Addressmaptable::Addressmapentry


class Rmon2Mib::Hlhostcontroltable : public ydk::Entity
{
    public:
        Hlhostcontroltable();
        ~Hlhostcontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hlhostcontrolentry; //type: Rmon2Mib::Hlhostcontroltable::Hlhostcontrolentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Hlhostcontroltable::Hlhostcontrolentry> > hlhostcontrolentry;
        
}; // Rmon2Mib::Hlhostcontroltable


class Rmon2Mib::Hlhostcontroltable::Hlhostcontrolentry : public ydk::Entity
{
    public:
        Hlhostcontrolentry();
        ~Hlhostcontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hlhostcontrolindex; //type: int32
        ydk::YLeaf hlhostcontroldatasource; //type: string
        ydk::YLeaf hlhostcontrolnldroppedframes; //type: uint32
        ydk::YLeaf hlhostcontrolnlinserts; //type: uint32
        ydk::YLeaf hlhostcontrolnldeletes; //type: uint32
        ydk::YLeaf hlhostcontrolnlmaxdesiredentries; //type: int32
        ydk::YLeaf hlhostcontrolaldroppedframes; //type: uint32
        ydk::YLeaf hlhostcontrolalinserts; //type: uint32
        ydk::YLeaf hlhostcontrolaldeletes; //type: uint32
        ydk::YLeaf hlhostcontrolalmaxdesiredentries; //type: int32
        ydk::YLeaf hlhostcontrolowner; //type: binary
        ydk::YLeaf hlhostcontrolstatus; //type: Rowstatus

}; // Rmon2Mib::Hlhostcontroltable::Hlhostcontrolentry


class Rmon2Mib::Nlhosttable : public ydk::Entity
{
    public:
        Nlhosttable();
        ~Nlhosttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nlhostentry; //type: Rmon2Mib::Nlhosttable::Nlhostentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Nlhosttable::Nlhostentry> > nlhostentry;
        
}; // Rmon2Mib::Nlhosttable


class Rmon2Mib::Nlhosttable::Nlhostentry : public ydk::Entity
{
    public:
        Nlhostentry();
        ~Nlhostentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Hlhostcontroltable::Hlhostcontrolentry::hlhostcontrolindex)
        ydk::YLeaf hlhostcontrolindex;
        ydk::YLeaf nlhosttimemark; //type: uint32
        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        ydk::YLeaf nlhostaddress; //type: binary
        ydk::YLeaf nlhostinpkts; //type: uint32
        ydk::YLeaf nlhostoutpkts; //type: uint32
        ydk::YLeaf nlhostinoctets; //type: uint32
        ydk::YLeaf nlhostoutoctets; //type: uint32
        ydk::YLeaf nlhostoutmacnonunicastpkts; //type: uint32
        ydk::YLeaf nlhostcreatetime; //type: uint32

}; // Rmon2Mib::Nlhosttable::Nlhostentry


class Rmon2Mib::Hlmatrixcontroltable : public ydk::Entity
{
    public:
        Hlmatrixcontroltable();
        ~Hlmatrixcontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hlmatrixcontrolentry; //type: Rmon2Mib::Hlmatrixcontroltable::Hlmatrixcontrolentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Hlmatrixcontroltable::Hlmatrixcontrolentry> > hlmatrixcontrolentry;
        
}; // Rmon2Mib::Hlmatrixcontroltable


class Rmon2Mib::Hlmatrixcontroltable::Hlmatrixcontrolentry : public ydk::Entity
{
    public:
        Hlmatrixcontrolentry();
        ~Hlmatrixcontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hlmatrixcontrolindex; //type: int32
        ydk::YLeaf hlmatrixcontroldatasource; //type: string
        ydk::YLeaf hlmatrixcontrolnldroppedframes; //type: uint32
        ydk::YLeaf hlmatrixcontrolnlinserts; //type: uint32
        ydk::YLeaf hlmatrixcontrolnldeletes; //type: uint32
        ydk::YLeaf hlmatrixcontrolnlmaxdesiredentries; //type: int32
        ydk::YLeaf hlmatrixcontrolaldroppedframes; //type: uint32
        ydk::YLeaf hlmatrixcontrolalinserts; //type: uint32
        ydk::YLeaf hlmatrixcontrolaldeletes; //type: uint32
        ydk::YLeaf hlmatrixcontrolalmaxdesiredentries; //type: int32
        ydk::YLeaf hlmatrixcontrolowner; //type: binary
        ydk::YLeaf hlmatrixcontrolstatus; //type: Rowstatus

}; // Rmon2Mib::Hlmatrixcontroltable::Hlmatrixcontrolentry


class Rmon2Mib::Nlmatrixsdtable : public ydk::Entity
{
    public:
        Nlmatrixsdtable();
        ~Nlmatrixsdtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nlmatrixsdentry; //type: Rmon2Mib::Nlmatrixsdtable::Nlmatrixsdentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Nlmatrixsdtable::Nlmatrixsdentry> > nlmatrixsdentry;
        
}; // Rmon2Mib::Nlmatrixsdtable


class Rmon2Mib::Nlmatrixsdtable::Nlmatrixsdentry : public ydk::Entity
{
    public:
        Nlmatrixsdentry();
        ~Nlmatrixsdentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Hlmatrixcontroltable::Hlmatrixcontrolentry::hlmatrixcontrolindex)
        ydk::YLeaf hlmatrixcontrolindex;
        ydk::YLeaf nlmatrixsdtimemark; //type: uint32
        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        ydk::YLeaf nlmatrixsdsourceaddress; //type: binary
        ydk::YLeaf nlmatrixsddestaddress; //type: binary
        ydk::YLeaf nlmatrixsdpkts; //type: uint32
        ydk::YLeaf nlmatrixsdoctets; //type: uint32
        ydk::YLeaf nlmatrixsdcreatetime; //type: uint32

}; // Rmon2Mib::Nlmatrixsdtable::Nlmatrixsdentry


class Rmon2Mib::Nlmatrixdstable : public ydk::Entity
{
    public:
        Nlmatrixdstable();
        ~Nlmatrixdstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nlmatrixdsentry; //type: Rmon2Mib::Nlmatrixdstable::Nlmatrixdsentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Nlmatrixdstable::Nlmatrixdsentry> > nlmatrixdsentry;
        
}; // Rmon2Mib::Nlmatrixdstable


class Rmon2Mib::Nlmatrixdstable::Nlmatrixdsentry : public ydk::Entity
{
    public:
        Nlmatrixdsentry();
        ~Nlmatrixdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Hlmatrixcontroltable::Hlmatrixcontrolentry::hlmatrixcontrolindex)
        ydk::YLeaf hlmatrixcontrolindex;
        ydk::YLeaf nlmatrixdstimemark; //type: uint32
        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        ydk::YLeaf nlmatrixdsdestaddress; //type: binary
        ydk::YLeaf nlmatrixdssourceaddress; //type: binary
        ydk::YLeaf nlmatrixdspkts; //type: uint32
        ydk::YLeaf nlmatrixdsoctets; //type: uint32
        ydk::YLeaf nlmatrixdscreatetime; //type: uint32

}; // Rmon2Mib::Nlmatrixdstable::Nlmatrixdsentry


class Rmon2Mib::Nlmatrixtopncontroltable : public ydk::Entity
{
    public:
        Nlmatrixtopncontroltable();
        ~Nlmatrixtopncontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nlmatrixtopncontrolentry; //type: Rmon2Mib::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry> > nlmatrixtopncontrolentry;
        
}; // Rmon2Mib::Nlmatrixtopncontroltable


class Rmon2Mib::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry : public ydk::Entity
{
    public:
        Nlmatrixtopncontrolentry();
        ~Nlmatrixtopncontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nlmatrixtopncontrolindex; //type: int32
        ydk::YLeaf nlmatrixtopncontrolmatrixindex; //type: int32
        ydk::YLeaf nlmatrixtopncontrolratebase; //type: Nlmatrixtopncontrolratebase
        ydk::YLeaf nlmatrixtopncontroltimeremaining; //type: int32
        ydk::YLeaf nlmatrixtopncontrolgeneratedreports; //type: uint32
        ydk::YLeaf nlmatrixtopncontrolduration; //type: int32
        ydk::YLeaf nlmatrixtopncontrolrequestedsize; //type: int32
        ydk::YLeaf nlmatrixtopncontrolgrantedsize; //type: int32
        ydk::YLeaf nlmatrixtopncontrolstarttime; //type: uint32
        ydk::YLeaf nlmatrixtopncontrolowner; //type: binary
        ydk::YLeaf nlmatrixtopncontrolstatus; //type: Rowstatus
        class Nlmatrixtopncontrolratebase;

}; // Rmon2Mib::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry


class Rmon2Mib::Nlmatrixtopntable : public ydk::Entity
{
    public:
        Nlmatrixtopntable();
        ~Nlmatrixtopntable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nlmatrixtopnentry; //type: Rmon2Mib::Nlmatrixtopntable::Nlmatrixtopnentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Nlmatrixtopntable::Nlmatrixtopnentry> > nlmatrixtopnentry;
        
}; // Rmon2Mib::Nlmatrixtopntable


class Rmon2Mib::Nlmatrixtopntable::Nlmatrixtopnentry : public ydk::Entity
{
    public:
        Nlmatrixtopnentry();
        ~Nlmatrixtopnentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry::nlmatrixtopncontrolindex)
        ydk::YLeaf nlmatrixtopncontrolindex;
        ydk::YLeaf nlmatrixtopnindex; //type: int32
        ydk::YLeaf nlmatrixtopnprotocoldirlocalindex; //type: int32
        ydk::YLeaf nlmatrixtopnsourceaddress; //type: binary
        ydk::YLeaf nlmatrixtopndestaddress; //type: binary
        ydk::YLeaf nlmatrixtopnpktrate; //type: uint32
        ydk::YLeaf nlmatrixtopnreversepktrate; //type: uint32
        ydk::YLeaf nlmatrixtopnoctetrate; //type: uint32
        ydk::YLeaf nlmatrixtopnreverseoctetrate; //type: uint32

}; // Rmon2Mib::Nlmatrixtopntable::Nlmatrixtopnentry


class Rmon2Mib::Alhosttable : public ydk::Entity
{
    public:
        Alhosttable();
        ~Alhosttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Alhostentry; //type: Rmon2Mib::Alhosttable::Alhostentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Alhosttable::Alhostentry> > alhostentry;
        
}; // Rmon2Mib::Alhosttable


class Rmon2Mib::Alhosttable::Alhostentry : public ydk::Entity
{
    public:
        Alhostentry();
        ~Alhostentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Hlhostcontroltable::Hlhostcontrolentry::hlhostcontrolindex)
        ydk::YLeaf hlhostcontrolindex;
        ydk::YLeaf alhosttimemark; //type: uint32
        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        //type: binary (refers to RMON2_MIB::Rmon2Mib::Nlhosttable::Nlhostentry::nlhostaddress)
        ydk::YLeaf nlhostaddress;
        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex_2;
        ydk::YLeaf alhostinpkts; //type: uint32
        ydk::YLeaf alhostoutpkts; //type: uint32
        ydk::YLeaf alhostinoctets; //type: uint32
        ydk::YLeaf alhostoutoctets; //type: uint32
        ydk::YLeaf alhostcreatetime; //type: uint32

}; // Rmon2Mib::Alhosttable::Alhostentry


class Rmon2Mib::Almatrixsdtable : public ydk::Entity
{
    public:
        Almatrixsdtable();
        ~Almatrixsdtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Almatrixsdentry; //type: Rmon2Mib::Almatrixsdtable::Almatrixsdentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Almatrixsdtable::Almatrixsdentry> > almatrixsdentry;
        
}; // Rmon2Mib::Almatrixsdtable


class Rmon2Mib::Almatrixsdtable::Almatrixsdentry : public ydk::Entity
{
    public:
        Almatrixsdentry();
        ~Almatrixsdentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Hlmatrixcontroltable::Hlmatrixcontrolentry::hlmatrixcontrolindex)
        ydk::YLeaf hlmatrixcontrolindex;
        ydk::YLeaf almatrixsdtimemark; //type: uint32
        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        //type: binary (refers to RMON2_MIB::Rmon2Mib::Nlmatrixsdtable::Nlmatrixsdentry::nlmatrixsdsourceaddress)
        ydk::YLeaf nlmatrixsdsourceaddress;
        //type: binary (refers to RMON2_MIB::Rmon2Mib::Nlmatrixsdtable::Nlmatrixsdentry::nlmatrixsddestaddress)
        ydk::YLeaf nlmatrixsddestaddress;
        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex_2;
        ydk::YLeaf almatrixsdpkts; //type: uint32
        ydk::YLeaf almatrixsdoctets; //type: uint32
        ydk::YLeaf almatrixsdcreatetime; //type: uint32

}; // Rmon2Mib::Almatrixsdtable::Almatrixsdentry


class Rmon2Mib::Almatrixdstable : public ydk::Entity
{
    public:
        Almatrixdstable();
        ~Almatrixdstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Almatrixdsentry; //type: Rmon2Mib::Almatrixdstable::Almatrixdsentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Almatrixdstable::Almatrixdsentry> > almatrixdsentry;
        
}; // Rmon2Mib::Almatrixdstable


class Rmon2Mib::Almatrixdstable::Almatrixdsentry : public ydk::Entity
{
    public:
        Almatrixdsentry();
        ~Almatrixdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Hlmatrixcontroltable::Hlmatrixcontrolentry::hlmatrixcontrolindex)
        ydk::YLeaf hlmatrixcontrolindex;
        ydk::YLeaf almatrixdstimemark; //type: uint32
        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        //type: binary (refers to RMON2_MIB::Rmon2Mib::Nlmatrixdstable::Nlmatrixdsentry::nlmatrixdsdestaddress)
        ydk::YLeaf nlmatrixdsdestaddress;
        //type: binary (refers to RMON2_MIB::Rmon2Mib::Nlmatrixdstable::Nlmatrixdsentry::nlmatrixdssourceaddress)
        ydk::YLeaf nlmatrixdssourceaddress;
        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex_2;
        ydk::YLeaf almatrixdspkts; //type: uint32
        ydk::YLeaf almatrixdsoctets; //type: uint32
        ydk::YLeaf almatrixdscreatetime; //type: uint32

}; // Rmon2Mib::Almatrixdstable::Almatrixdsentry


class Rmon2Mib::Almatrixtopncontroltable : public ydk::Entity
{
    public:
        Almatrixtopncontroltable();
        ~Almatrixtopncontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Almatrixtopncontrolentry; //type: Rmon2Mib::Almatrixtopncontroltable::Almatrixtopncontrolentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Almatrixtopncontroltable::Almatrixtopncontrolentry> > almatrixtopncontrolentry;
        
}; // Rmon2Mib::Almatrixtopncontroltable


class Rmon2Mib::Almatrixtopncontroltable::Almatrixtopncontrolentry : public ydk::Entity
{
    public:
        Almatrixtopncontrolentry();
        ~Almatrixtopncontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf almatrixtopncontrolindex; //type: int32
        ydk::YLeaf almatrixtopncontrolmatrixindex; //type: int32
        ydk::YLeaf almatrixtopncontrolratebase; //type: Almatrixtopncontrolratebase
        ydk::YLeaf almatrixtopncontroltimeremaining; //type: int32
        ydk::YLeaf almatrixtopncontrolgeneratedreports; //type: uint32
        ydk::YLeaf almatrixtopncontrolduration; //type: int32
        ydk::YLeaf almatrixtopncontrolrequestedsize; //type: int32
        ydk::YLeaf almatrixtopncontrolgrantedsize; //type: int32
        ydk::YLeaf almatrixtopncontrolstarttime; //type: uint32
        ydk::YLeaf almatrixtopncontrolowner; //type: binary
        ydk::YLeaf almatrixtopncontrolstatus; //type: Rowstatus
        class Almatrixtopncontrolratebase;

}; // Rmon2Mib::Almatrixtopncontroltable::Almatrixtopncontrolentry


class Rmon2Mib::Almatrixtopntable : public ydk::Entity
{
    public:
        Almatrixtopntable();
        ~Almatrixtopntable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Almatrixtopnentry; //type: Rmon2Mib::Almatrixtopntable::Almatrixtopnentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Almatrixtopntable::Almatrixtopnentry> > almatrixtopnentry;
        
}; // Rmon2Mib::Almatrixtopntable


class Rmon2Mib::Almatrixtopntable::Almatrixtopnentry : public ydk::Entity
{
    public:
        Almatrixtopnentry();
        ~Almatrixtopnentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Almatrixtopncontroltable::Almatrixtopncontrolentry::almatrixtopncontrolindex)
        ydk::YLeaf almatrixtopncontrolindex;
        ydk::YLeaf almatrixtopnindex; //type: int32
        ydk::YLeaf almatrixtopnprotocoldirlocalindex; //type: int32
        ydk::YLeaf almatrixtopnsourceaddress; //type: binary
        ydk::YLeaf almatrixtopndestaddress; //type: binary
        ydk::YLeaf almatrixtopnappprotocoldirlocalindex; //type: int32
        ydk::YLeaf almatrixtopnpktrate; //type: uint32
        ydk::YLeaf almatrixtopnreversepktrate; //type: uint32
        ydk::YLeaf almatrixtopnoctetrate; //type: uint32
        ydk::YLeaf almatrixtopnreverseoctetrate; //type: uint32

}; // Rmon2Mib::Almatrixtopntable::Almatrixtopnentry


class Rmon2Mib::Usrhistorycontroltable : public ydk::Entity
{
    public:
        Usrhistorycontroltable();
        ~Usrhistorycontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Usrhistorycontrolentry; //type: Rmon2Mib::Usrhistorycontroltable::Usrhistorycontrolentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Usrhistorycontroltable::Usrhistorycontrolentry> > usrhistorycontrolentry;
        
}; // Rmon2Mib::Usrhistorycontroltable


class Rmon2Mib::Usrhistorycontroltable::Usrhistorycontrolentry : public ydk::Entity
{
    public:
        Usrhistorycontrolentry();
        ~Usrhistorycontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf usrhistorycontrolindex; //type: int32
        ydk::YLeaf usrhistorycontrolobjects; //type: int32
        ydk::YLeaf usrhistorycontrolbucketsrequested; //type: int32
        ydk::YLeaf usrhistorycontrolbucketsgranted; //type: int32
        ydk::YLeaf usrhistorycontrolinterval; //type: int32
        ydk::YLeaf usrhistorycontrolowner; //type: binary
        ydk::YLeaf usrhistorycontrolstatus; //type: Rowstatus

}; // Rmon2Mib::Usrhistorycontroltable::Usrhistorycontrolentry


class Rmon2Mib::Usrhistoryobjecttable : public ydk::Entity
{
    public:
        Usrhistoryobjecttable();
        ~Usrhistoryobjecttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Usrhistoryobjectentry; //type: Rmon2Mib::Usrhistoryobjecttable::Usrhistoryobjectentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Usrhistoryobjecttable::Usrhistoryobjectentry> > usrhistoryobjectentry;
        
}; // Rmon2Mib::Usrhistoryobjecttable


class Rmon2Mib::Usrhistoryobjecttable::Usrhistoryobjectentry : public ydk::Entity
{
    public:
        Usrhistoryobjectentry();
        ~Usrhistoryobjectentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Usrhistorycontroltable::Usrhistorycontrolentry::usrhistorycontrolindex)
        ydk::YLeaf usrhistorycontrolindex;
        ydk::YLeaf usrhistoryobjectindex; //type: int32
        ydk::YLeaf usrhistoryobjectvariable; //type: string
        ydk::YLeaf usrhistoryobjectsampletype; //type: Usrhistoryobjectsampletype
        class Usrhistoryobjectsampletype;

}; // Rmon2Mib::Usrhistoryobjecttable::Usrhistoryobjectentry


class Rmon2Mib::Usrhistorytable : public ydk::Entity
{
    public:
        Usrhistorytable();
        ~Usrhistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Usrhistoryentry; //type: Rmon2Mib::Usrhistorytable::Usrhistoryentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Usrhistorytable::Usrhistoryentry> > usrhistoryentry;
        
}; // Rmon2Mib::Usrhistorytable


class Rmon2Mib::Usrhistorytable::Usrhistoryentry : public ydk::Entity
{
    public:
        Usrhistoryentry();
        ~Usrhistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Usrhistorycontroltable::Usrhistorycontrolentry::usrhistorycontrolindex)
        ydk::YLeaf usrhistorycontrolindex;
        ydk::YLeaf usrhistorysampleindex; //type: int32
        //type: int32 (refers to RMON2_MIB::Rmon2Mib::Usrhistoryobjecttable::Usrhistoryobjectentry::usrhistoryobjectindex)
        ydk::YLeaf usrhistoryobjectindex;
        ydk::YLeaf usrhistoryintervalstart; //type: uint32
        ydk::YLeaf usrhistoryintervalend; //type: uint32
        ydk::YLeaf usrhistoryabsvalue; //type: uint32
        ydk::YLeaf usrhistoryvalstatus; //type: Usrhistoryvalstatus
        class Usrhistoryvalstatus;

}; // Rmon2Mib::Usrhistorytable::Usrhistoryentry


class Rmon2Mib::Serialconfigtable : public ydk::Entity
{
    public:
        Serialconfigtable();
        ~Serialconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Serialconfigentry; //type: Rmon2Mib::Serialconfigtable::Serialconfigentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Serialconfigtable::Serialconfigentry> > serialconfigentry;
        
}; // Rmon2Mib::Serialconfigtable


class Rmon2Mib::Serialconfigtable::Serialconfigentry : public ydk::Entity
{
    public:
        Serialconfigentry();
        ~Serialconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to RFC1213_MIB::Rfc1213Mib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf serialmode; //type: Serialmode
        ydk::YLeaf serialprotocol; //type: Serialprotocol
        ydk::YLeaf serialtimeout; //type: int32
        ydk::YLeaf serialmodeminitstring; //type: string
        ydk::YLeaf serialmodemhangupstring; //type: string
        ydk::YLeaf serialmodemconnectresp; //type: string
        ydk::YLeaf serialmodemnoconnectresp; //type: string
        ydk::YLeaf serialdialouttimeout; //type: int32
        ydk::YLeaf serialstatus; //type: Rowstatus
        class Serialmode;
        class Serialprotocol;

}; // Rmon2Mib::Serialconfigtable::Serialconfigentry


class Rmon2Mib::Netconfigtable : public ydk::Entity
{
    public:
        Netconfigtable();
        ~Netconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Netconfigentry; //type: Rmon2Mib::Netconfigtable::Netconfigentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Netconfigtable::Netconfigentry> > netconfigentry;
        
}; // Rmon2Mib::Netconfigtable


class Rmon2Mib::Netconfigtable::Netconfigentry : public ydk::Entity
{
    public:
        Netconfigentry();
        ~Netconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to RFC1213_MIB::Rfc1213Mib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf netconfigipaddress; //type: string
        ydk::YLeaf netconfigsubnetmask; //type: string
        ydk::YLeaf netconfigstatus; //type: Rowstatus

}; // Rmon2Mib::Netconfigtable::Netconfigentry


class Rmon2Mib::Trapdesttable : public ydk::Entity
{
    public:
        Trapdesttable();
        ~Trapdesttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Trapdestentry; //type: Rmon2Mib::Trapdesttable::Trapdestentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Trapdesttable::Trapdestentry> > trapdestentry;
        
}; // Rmon2Mib::Trapdesttable


class Rmon2Mib::Trapdesttable::Trapdestentry : public ydk::Entity
{
    public:
        Trapdestentry();
        ~Trapdestentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trapdestindex; //type: int32
        ydk::YLeaf trapdestcommunity; //type: binary
        ydk::YLeaf trapdestprotocol; //type: Trapdestprotocol
        ydk::YLeaf trapdestaddress; //type: binary
        ydk::YLeaf trapdestowner; //type: binary
        ydk::YLeaf trapdeststatus; //type: Rowstatus
        class Trapdestprotocol;

}; // Rmon2Mib::Trapdesttable::Trapdestentry


class Rmon2Mib::Serialconnectiontable : public ydk::Entity
{
    public:
        Serialconnectiontable();
        ~Serialconnectiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Serialconnectionentry; //type: Rmon2Mib::Serialconnectiontable::Serialconnectionentry

        std::vector<std::shared_ptr<RMON2_MIB::Rmon2Mib::Serialconnectiontable::Serialconnectionentry> > serialconnectionentry;
        
}; // Rmon2Mib::Serialconnectiontable


class Rmon2Mib::Serialconnectiontable::Serialconnectionentry : public ydk::Entity
{
    public:
        Serialconnectionentry();
        ~Serialconnectionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf serialconnectindex; //type: int32
        ydk::YLeaf serialconnectdestipaddress; //type: string
        ydk::YLeaf serialconnecttype; //type: Serialconnecttype
        ydk::YLeaf serialconnectdialstring; //type: string
        ydk::YLeaf serialconnectswitchconnectseq; //type: string
        ydk::YLeaf serialconnectswitchdisconnectseq; //type: string
        ydk::YLeaf serialconnectswitchresetseq; //type: string
        ydk::YLeaf serialconnectowner; //type: binary
        ydk::YLeaf serialconnectstatus; //type: Rowstatus
        class Serialconnecttype;

}; // Rmon2Mib::Serialconnectiontable::Serialconnectionentry

class Rmon2Mib::Probeconfig::Proberesetcontrol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf warmBoot;
        static const ydk::Enum::YLeaf coldBoot;

};

class Rmon2Mib::Probeconfig::Probedownloadaction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notDownloading;
        static const ydk::Enum::YLeaf downloadToPROM;
        static const ydk::Enum::YLeaf downloadToRAM;

};

class Rmon2Mib::Probeconfig::Probedownloadstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf downloadSuccess;
        static const ydk::Enum::YLeaf downloadStatusUnknown;
        static const ydk::Enum::YLeaf downloadGeneralError;
        static const ydk::Enum::YLeaf downloadNoResponseFromServer;
        static const ydk::Enum::YLeaf downloadChecksumError;
        static const ydk::Enum::YLeaf downloadIncompatibleImage;
        static const ydk::Enum::YLeaf downloadTftpFileNotFound;
        static const ydk::Enum::YLeaf downloadTftpAccessViolation;

};

class Rmon2Mib::Protocoldirtable::Protocoldirentry::Protocoldiraddressmapconfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notSupported;
        static const ydk::Enum::YLeaf supportedOff;
        static const ydk::Enum::YLeaf supportedOn;

};

class Rmon2Mib::Protocoldirtable::Protocoldirentry::Protocoldirhostconfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notSupported;
        static const ydk::Enum::YLeaf supportedOff;
        static const ydk::Enum::YLeaf supportedOn;

};

class Rmon2Mib::Protocoldirtable::Protocoldirentry::Protocoldirmatrixconfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notSupported;
        static const ydk::Enum::YLeaf supportedOff;
        static const ydk::Enum::YLeaf supportedOn;

};

class Rmon2Mib::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry::Nlmatrixtopncontrolratebase : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nlMatrixTopNPkts;
        static const ydk::Enum::YLeaf nlMatrixTopNOctets;

};

class Rmon2Mib::Almatrixtopncontroltable::Almatrixtopncontrolentry::Almatrixtopncontrolratebase : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf alMatrixTopNTerminalsPkts;
        static const ydk::Enum::YLeaf alMatrixTopNTerminalsOctets;
        static const ydk::Enum::YLeaf alMatrixTopNAllPkts;
        static const ydk::Enum::YLeaf alMatrixTopNAllOctets;

};

class Rmon2Mib::Usrhistoryobjecttable::Usrhistoryobjectentry::Usrhistoryobjectsampletype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absoluteValue;
        static const ydk::Enum::YLeaf deltaValue;

};

class Rmon2Mib::Usrhistorytable::Usrhistoryentry::Usrhistoryvalstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf valueNotAvailable;
        static const ydk::Enum::YLeaf valuePositive;
        static const ydk::Enum::YLeaf valueNegative;

};

class Rmon2Mib::Serialconfigtable::Serialconfigentry::Serialmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf direct;
        static const ydk::Enum::YLeaf modem;

};

class Rmon2Mib::Serialconfigtable::Serialconfigentry::Serialprotocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf slip;
        static const ydk::Enum::YLeaf ppp;

};

class Rmon2Mib::Trapdesttable::Trapdestentry::Trapdestprotocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipx;

};

class Rmon2Mib::Serialconnectiontable::Serialconnectionentry::Serialconnecttype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf direct;
        static const ydk::Enum::YLeaf modem;
        static const ydk::Enum::YLeaf switch_;
        static const ydk::Enum::YLeaf modemSwitch;

};


}
}

#endif /* _RMON2_MIB_ */

