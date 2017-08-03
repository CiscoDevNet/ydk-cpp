#ifndef _TCP_MIB_
#define _TCP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace TCP_MIB {

class TcpMib : public ydk::Entity
{
    public:
        TcpMib();
        ~TcpMib();

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

        class Tcp; //type: TcpMib::Tcp
        class Tcpconntable; //type: TcpMib::Tcpconntable
        class Tcpconnectiontable; //type: TcpMib::Tcpconnectiontable
        class Tcplistenertable; //type: TcpMib::Tcplistenertable

        std::shared_ptr<TCP_MIB::TcpMib::Tcp> tcp;
        std::shared_ptr<TCP_MIB::TcpMib::Tcpconnectiontable> tcpconnectiontable;
        std::shared_ptr<TCP_MIB::TcpMib::Tcpconntable> tcpconntable;
        std::shared_ptr<TCP_MIB::TcpMib::Tcplistenertable> tcplistenertable;
        
}; // TcpMib


class TcpMib::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcprtoalgorithm; //type: Tcprtoalgorithm
        ydk::YLeaf tcprtomin; //type: int32
        ydk::YLeaf tcprtomax; //type: int32
        ydk::YLeaf tcpmaxconn; //type: int32
        ydk::YLeaf tcpactiveopens; //type: uint32
        ydk::YLeaf tcppassiveopens; //type: uint32
        ydk::YLeaf tcpattemptfails; //type: uint32
        ydk::YLeaf tcpestabresets; //type: uint32
        ydk::YLeaf tcpcurrestab; //type: uint32
        ydk::YLeaf tcpinsegs; //type: uint32
        ydk::YLeaf tcpoutsegs; //type: uint32
        ydk::YLeaf tcpretranssegs; //type: uint32
        ydk::YLeaf tcpinerrs; //type: uint32
        ydk::YLeaf tcpoutrsts; //type: uint32
        ydk::YLeaf tcphcinsegs; //type: uint64
        ydk::YLeaf tcphcoutsegs; //type: uint64
        class Tcprtoalgorithm;

}; // TcpMib::Tcp


class TcpMib::Tcpconntable : public ydk::Entity
{
    public:
        Tcpconntable();
        ~Tcpconntable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tcpconnentry; //type: TcpMib::Tcpconntable::Tcpconnentry

        std::vector<std::shared_ptr<TCP_MIB::TcpMib::Tcpconntable::Tcpconnentry> > tcpconnentry;
        
}; // TcpMib::Tcpconntable


class TcpMib::Tcpconntable::Tcpconnentry : public ydk::Entity
{
    public:
        Tcpconnentry();
        ~Tcpconnentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcpconnlocaladdress; //type: string
        ydk::YLeaf tcpconnlocalport; //type: int32
        ydk::YLeaf tcpconnremaddress; //type: string
        ydk::YLeaf tcpconnremport; //type: int32
        ydk::YLeaf tcpconnstate; //type: Tcpconnstate
        class Tcpconnstate;

}; // TcpMib::Tcpconntable::Tcpconnentry


class TcpMib::Tcpconnectiontable : public ydk::Entity
{
    public:
        Tcpconnectiontable();
        ~Tcpconnectiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tcpconnectionentry; //type: TcpMib::Tcpconnectiontable::Tcpconnectionentry

        std::vector<std::shared_ptr<TCP_MIB::TcpMib::Tcpconnectiontable::Tcpconnectionentry> > tcpconnectionentry;
        
}; // TcpMib::Tcpconnectiontable


class TcpMib::Tcpconnectiontable::Tcpconnectionentry : public ydk::Entity
{
    public:
        Tcpconnectionentry();
        ~Tcpconnectionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcpconnectionlocaladdresstype; //type: Inetaddresstype
        ydk::YLeaf tcpconnectionlocaladdress; //type: binary
        ydk::YLeaf tcpconnectionlocalport; //type: uint16
        ydk::YLeaf tcpconnectionremaddresstype; //type: Inetaddresstype
        ydk::YLeaf tcpconnectionremaddress; //type: binary
        ydk::YLeaf tcpconnectionremport; //type: uint16
        ydk::YLeaf tcpconnectionstate; //type: Tcpconnectionstate
        ydk::YLeaf tcpconnectionprocess; //type: uint32
        class Tcpconnectionstate;

}; // TcpMib::Tcpconnectiontable::Tcpconnectionentry


class TcpMib::Tcplistenertable : public ydk::Entity
{
    public:
        Tcplistenertable();
        ~Tcplistenertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tcplistenerentry; //type: TcpMib::Tcplistenertable::Tcplistenerentry

        std::vector<std::shared_ptr<TCP_MIB::TcpMib::Tcplistenertable::Tcplistenerentry> > tcplistenerentry;
        
}; // TcpMib::Tcplistenertable


class TcpMib::Tcplistenertable::Tcplistenerentry : public ydk::Entity
{
    public:
        Tcplistenerentry();
        ~Tcplistenerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcplistenerlocaladdresstype; //type: Inetaddresstype
        ydk::YLeaf tcplistenerlocaladdress; //type: binary
        ydk::YLeaf tcplistenerlocalport; //type: uint16
        ydk::YLeaf tcplistenerprocess; //type: uint32

}; // TcpMib::Tcplistenertable::Tcplistenerentry

class TcpMib::Tcp::Tcprtoalgorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf constant;
        static const ydk::Enum::YLeaf rsre;
        static const ydk::Enum::YLeaf vanj;
        static const ydk::Enum::YLeaf rfc2988;

};

class TcpMib::Tcpconntable::Tcpconnentry::Tcpconnstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf closed;
        static const ydk::Enum::YLeaf listen;
        static const ydk::Enum::YLeaf synSent;
        static const ydk::Enum::YLeaf synReceived;
        static const ydk::Enum::YLeaf established;
        static const ydk::Enum::YLeaf finWait1;
        static const ydk::Enum::YLeaf finWait2;
        static const ydk::Enum::YLeaf closeWait;
        static const ydk::Enum::YLeaf lastAck;
        static const ydk::Enum::YLeaf closing;
        static const ydk::Enum::YLeaf timeWait;
        static const ydk::Enum::YLeaf deleteTCB;

};

class TcpMib::Tcpconnectiontable::Tcpconnectionentry::Tcpconnectionstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf closed;
        static const ydk::Enum::YLeaf listen;
        static const ydk::Enum::YLeaf synSent;
        static const ydk::Enum::YLeaf synReceived;
        static const ydk::Enum::YLeaf established;
        static const ydk::Enum::YLeaf finWait1;
        static const ydk::Enum::YLeaf finWait2;
        static const ydk::Enum::YLeaf closeWait;
        static const ydk::Enum::YLeaf lastAck;
        static const ydk::Enum::YLeaf closing;
        static const ydk::Enum::YLeaf timeWait;
        static const ydk::Enum::YLeaf deleteTCB;

};


}
}

#endif /* _TCP_MIB_ */

