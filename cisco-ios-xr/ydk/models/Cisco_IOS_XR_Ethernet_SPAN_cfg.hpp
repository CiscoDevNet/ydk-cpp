#ifndef _CISCO_IOS_XR_ETHERNET_SPAN_CFG_
#define _CISCO_IOS_XR_ETHERNET_SPAN_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"


namespace ydk {
namespace Cisco_IOS_XR_Ethernet_SPAN_cfg {

class SpanMonitorSession : public Entity
{
    public:
        SpanMonitorSession();
        ~SpanMonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Sessions : public Entity
    {
        public:
            Sessions();
            ~Sessions();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Session : public Entity
        {
            public:
                Session();
                ~Session();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf session; //type: string
                YLeaf class_; //type: SpanSessionClassEnum

            class Destination : public Entity
            {
                public:
                    Destination();
                    ~Destination();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf destination_type; //type: SpanDestinationEnum
                    YLeaf destination_interface_name; //type: string
                    YLeaf destination_ipv4_address; //type: string
                    YLeaf destination_ipv6_address; //type: string



            }; // SpanMonitorSession::Sessions::Session::Destination


                std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_cfg::SpanMonitorSession::Sessions::Session::Destination> destination;


        }; // SpanMonitorSession::Sessions::Session


            std::vector<std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_cfg::SpanMonitorSession::Sessions::Session> > session;


    }; // SpanMonitorSession::Sessions


        std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_cfg::SpanMonitorSession::Sessions> sessions;


}; // SpanMonitorSession


class SpanTrafficDirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf rx_only;
        static const Enum::YLeaf tx_only;

};

class SpanMirrorIntervalEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_512;
        static const Enum::YLeaf Y_1k;
        static const Enum::YLeaf Y_2k;
        static const Enum::YLeaf Y_4k;
        static const Enum::YLeaf Y_8k;
        static const Enum::YLeaf Y_16k;

};

class SpanDestinationEnum : public Enum
{
    public:
        static const Enum::YLeaf interface;
        static const Enum::YLeaf pseudowire;
        static const Enum::YLeaf ipv4_address;
        static const Enum::YLeaf ipv6_address;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_SPAN_CFG_ */

